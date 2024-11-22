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

#ifndef EMSESP_MBUS_H
#define EMSESP_MBUS_H


#include "emsesp.h"

namespace emsesp {


class MBus {
  public:
    void start();
    void loop();
    static void incoming_telegram(uint8_t * data, const uint8_t length);


    // commands

  private:
    static uuid::log::Logger logger_;


    bool     ha_configdone_ = false; // for HA MQTT Discovery


};

} // namespace emsesp

#endif
