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

#ifndef EMSESP_WMETER_H
#define EMSESP_WMETER_H

#define WMETERUART_NUM UART_NUM_2
#define WMETER_BAUD 9600

#define WMETER_MAXBUFFERSIZE 14

#include "emsesp.h"

namespace emsesp {


class WMeter {
  public:
    void start();
    void loop();
    void static incoming_telegram(uint8_t *data, const uint8_t length);
    void send_wmeter(uint64_t counter, bool force);

    // commands

  private:
    static uuid::log::Logger logger_;
    static uint64_t wmeter_counter_; // m³
    bool     ha_configdone_ = false; // for HA MQTT Discovery


};

} // namespace emsesp

#endif
