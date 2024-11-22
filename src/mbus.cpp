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

#include "mbus.h"

namespace emsesp {

//uuid::log::Logger MBus::logger_{F_(mbus), uuid::log::Facility::CONSOLE};

void MBus::incoming_telegram(uint8_t * data, const uint8_t length) {
#ifdef EMSESP_UART_DEBUG
    static uint32_t rx_time_ = 0;
#endif

#ifdef EMSESP_UART_DEBUG
        // get_uptime is only updated once per loop, does not give the right time
        LOG_TRACE("[UART_DEBUG] Echo after %d ms: %s", ::millis() - rx_time_, Helpers::data_to_hex(data, length).c_str());
#endif

        return; // it's an echo
    
}

void MBus::start() {



}

void MBus::loop() {

    // wie oft wird die loop aufgerufen

    // uart starten und so alles hier machen

}




} // namespace emsesp
