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

#ifndef EMSESP_WMUART_H
#define EMSESP_WMUART_H

#define WM_MAXBUFFERSIZE 16 // max size of the buffer. 

#define WMUART_NUM UART_NUM_2
#define WMUART_BAUD 4800

#define WM_TXMODE_DEFAULT 1

namespace emsesp {

#define WM_TX_STATUS_OK 1
#define WM_TX_STATUS_ERR 0

class WMuart {
  public:
    WMuart()  = default;
    ~WMuart() = default;

    static void     start(const uint8_t tx_mode, const uint8_t rx_gpio, const uint8_t tx_gpio);
    static void     send_poll(const uint8_t data);
    static void     stop();
    static uint16_t transmit(const uint8_t *buf, const uint8_t len);

  private:
    static void wmuart_event_task(void *pvParameters);

};

} // namespace emsesp

#endif
