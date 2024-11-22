/*
 * EMS-ESP - https://github.com/emsesp/EMS-ESP
 * Copyright 2020-2024  Paul Derbyshire
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * ESP32 UART port by @ArwedL and improved by @MichaelDvP. See https://github.com/emsesp/EMS-ESP/issues/380
 */

#ifndef EMSESP_STANDALONE

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/uart.h"
#include "soc/uart_reg.h"
#include "uart/wmuart_esp32.h"
#include "wmeter.h"

namespace emsesp {

static QueueHandle_t wm_uart_queue;
uint8_t              wmtx_mode_ = 0xFF;

/*
* receive task, wait for break and call incoming_telegram
*/
void WMuart::wmuart_event_task(void *pvParameters) {
    uart_event_t event;
    uint8_t      telegram[WM_MAXBUFFERSIZE];
    uint8_t      length = 0;

    while (1) {
        //Waiting for UART event.
        if (xQueueReceive(wm_uart_queue, (void *)&event, portMAX_DELAY)) {
            if (event.type == UART_DATA) {
                length += event.size;
                if (length >= 6 && length <= WM_MAXBUFFERSIZE) {
                    uart_read_bytes(WMUART_NUM, telegram, length, portMAX_DELAY);
                    WMeter::incoming_telegram(telegram, (uint8_t)(length - 1));
                    length = 0;
                }
            } else if (event.type == UART_BREAK) {
                uart_flush_input(WMUART_NUM);
                length = 0;
            } else if (event.type == UART_BUFFER_FULL) {
                uart_flush_input(WMUART_NUM);
                length = 0;
            }
        }
    }
    vTaskDelete(NULL);
}

/*
 * init UART driver
 */
void WMuart::start(const uint8_t tx_mode, const uint8_t rx_gpio, const uint8_t tx_gpio) {
    if (wmtx_mode_ == 0xFF) {
        uart_config_t uart_config = {
            .baud_rate  = WMETER_BAUD,
            .data_bits  = UART_DATA_8_BITS,
            .parity     = UART_PARITY_DISABLE,
            .stop_bits  = UART_STOP_BITS_1,
            .flow_ctrl  = UART_HW_FLOWCTRL_DISABLE,
            .rx_flow_ctrl_thresh = 0,
            .source_clk = UART_SCLK_APB,
        };
        ESP_ERROR_CHECK(uart_driver_install(WMUART_NUM, 129, 0, (WM_MAXBUFFERSIZE + 1) * 2, &wm_uart_queue, 0)); // buffer must be > fifo

        ESP_ERROR_CHECK(uart_param_config(WMUART_NUM, &uart_config));
        ESP_ERROR_CHECK(uart_set_pin(WMUART_NUM, UART_PIN_NO_CHANGE, rx_gpio, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE));
        uart_set_rx_full_threshold(WMUART_NUM, 1);
        uart_set_rx_timeout(WMUART_NUM, 0); // disable

        // note esp32s3 crashes with 2k stacksize, stack overflow here sometimes wipes settingsfiles.
        xTaskCreate(wmuart_event_task, "mwuart_event_task", 512, NULL, configMAX_PRIORITIES - 1, NULL);
        //uart_driver_delete(WMUART_NUM);
    }
    wmtx_mode_ = tx_mode;
    //uart_enable_intr_mask(WMUART_NUM, UART_BRK_DET_INT_ENA | UART_RXFIFO_FULL_INT_ENA);
}

/*
 * Stop, disable interrupt
 */
void WMuart::stop() {
    if (wmtx_mode_ != 0xFF) { // only call after driver initialisation
        uart_disable_intr_mask(EMSUART_NUM, UART_BRK_DET_INT_ENA | UART_RXFIFO_FULL_INT_ENA);
        // TODO should we xTaskSuspend() the event task here?
    }
};

/*
 * Sends a 1-byte poll, ending with a <BRK>
 */
void WMuart::send_poll(const uint8_t data) {
    transmit(&data, 1);
}

/*
 * Send data to Tx line, ending with a <BRK>
 * buf contains the CRC and len is #bytes including the CRC
 * returns code, 1=success
 */
uint16_t WMuart::transmit(const uint8_t *buf, const uint8_t len) {
    if (len == 0 || len >= WM_MAXBUFFERSIZE) {
        return WM_TX_STATUS_ERR;
    }

    // mode 1: wait for echo after each byte
    for (uint8_t i = 0; i < len; i++) {
        size_t rx0;
        uart_get_buffered_data_len(WMUART_NUM, &rx0);
        uart_write_bytes(WMUART_NUM, &buf[i], 1);
    }
    return WM_TX_STATUS_OK;
}

} // namespace emsesp

#endif
