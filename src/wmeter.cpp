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

#include "wmeter.h"

namespace emsesp {

//uuid::log::Logger WMeter::logger_{F_(wmeter), uuid::log::Facility::CONSOLE};
uint64_t wmeter_counter;

void WMeter::incoming_telegram(uint8_t *data, const uint8_t length) {
#ifdef EMSESP_UART_DEBUG
    static uint32_t rx_time_ = 0;
#endif
    // check for header
    if ((data[0] == 0x13) && (data[1] == 0x37) && (length > 2)) {

        if (length > 5) {
            wmeter_counter = data[2] + (data[3] << 8) + (data[4] << 16) + (data[5] << 24 );
        }

#ifdef EMSESP_UART_DEBUG
        // get_uptime is only updated once per loop, does not give the right time
        LOG_TRACE("[UART_DEBUG] Echo after %d ms: %s", ::millis() - rx_time_, Helpers::data_to_hex(data, length).c_str());
#endif

    }
}


void WMeter::start() {

    wmeter_counter = 0x00000000;
    EMSuart::start(0, 18, 0); // start UART
    //send_wmeter(wmeter_counter, true);
}

void WMeter::loop() {

    //send_wmeter(wmeter_counter, false);
}



// send status of shower to MQTT topic called shower_active - which is determined by the state parameter
// and creates the HA config topic if HA enabled
// force is used by EMSESP::publish_all_loop()
void WMeter::send_wmeter(uint64_t counter, bool force) {

    // only publish if that state has changed
    static uint64_t old_counter_ = 0xFFFFFFFF;
    if ((counter == old_counter_) && !force) {
        return;
    }
    old_counter_ = counter; // copy current state

    // always publish as a string
    char s[12];
    Mqtt::queue_publish("water_meter", Helpers::render_boolean(s, counter)); // https://github.com/emsesp/EMS-ESP/issues/369

    // send out HA MQTT Discovery config topic
 /*   if ((Mqtt::ha_enabled()) && (!ha_configdone_ || force)) {
        JsonDocument doc;
        char         topic[Mqtt::MQTT_TOPIC_MAX_SIZE];
        char         str[70];
        char         stat_t[50];

        //
        // wmeter counter
        //
        doc["name"] = "Water Meter";

        snprintf(str, sizeof(str), "%s_water_meter", Mqtt::basename().c_str());

        doc["uniq_id"]   = str;
        doc["object_id"] = str;

        snprintf(stat_t, sizeof(stat_t), "%s/water_meter", Mqtt::base().c_str());
        doc["stat_t"] = stat_t;
        doc["val_tpl"]      = "{{value_json.water if value_json.water is defined else 0}}";
        doc["unit_of_meas"] = "m³";
        doc["stat_cla"]     = "water";
        doc["dev_cla"]      = "total_increasing";

        Mqtt::add_ha_sections_to_doc("wmeter", stat_t, doc, true, "value_json.water is defined"); // create first dev & ids

        snprintf(topic, sizeof(topic), "sensor/%s/water_meter/config", Mqtt::basename().c_str());
        ha_configdone_ = Mqtt::queue_ha(topic, doc.as<JsonObject>()); // publish the config payload with retain flag

        Mqtt::add_ha_sections_to_doc("wmeter", stat_t, doc, false, "value_json.water is defined");
    }*/
}

} // namespace emsesp
