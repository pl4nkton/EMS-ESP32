/*
 * EMS-ESP - https://github.com/emsesp/EMS-ESP
 * Copyright 2020  Paul Derbyshire
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
#pragma once

// Define languages here
// Makes sure they are also added in same order to languages[] in system.cpp
#define EMSESP_LOCALE_EN "en"
#define EMSESP_LOCALE_DE "de"
#define EMSESP_LOCALE_NL "nl"
#define EMSESP_LOCALE_SE "se"
#define EMSESP_LOCALE_PL "pl"
#define EMSESP_LOCALE_NO "no"

// translations are in order en, de,nl, se....
// if there is no translation, it will default to en

// General
MAKE_PSTR_LIST(on, "on", "an", "aan", "på")
MAKE_PSTR_LIST(off, "off", "aus", "uit", "av")
MAKE_PSTR_LIST(ON, "ON", "AN", "AAN", "PÅ")
MAKE_PSTR_LIST(OFF, "OFF", "AUS", "UIT", "AV")

// Unit Of Measurement mapping - maps to DeviceValueUOM_s in emsdevice.cpp
// uom - also used with HA see https://github.com/home-assistant/core/blob/d7ac4bd65379e11461c7ce0893d3533d8d8b8cbf/homeassistant/const.py#L384
MAKE_PSTR_LIST(minutes, "minutes", "Minuten", "Minuten", "Minuter")
MAKE_PSTR_LIST(hours, "hours", "Stunden", "Uren", "Timmar")
MAKE_PSTR_LIST(days, "days", "Tage", "Dagen", "Dagar")
MAKE_PSTR_LIST(seconds, "seconds", "Sekunden", "Seconden", "Sekunder")

// Enum translations
// general
MAKE_PSTR_LIST(day_mo, "mo", "Mo", "Mo", "Må")
MAKE_PSTR_LIST(day_tu, "tu", "Di", "Di", "Ti")
MAKE_PSTR_LIST(day_we, "we", "Mi", "Wo", "On")
MAKE_PSTR_LIST(day_th, "th", "Do", "Do", "To")
MAKE_PSTR_LIST(day_fr, "fr", "Fr", "Vr", "Fr")
MAKE_PSTR_LIST(day_sa, "sa", "Sa", "Za", "Lö")
MAKE_PSTR_LIST(day_su, "su", "So", "Zo", "Sö")
MAKE_PSTR_LIST(all, "all", "Alle", "Alle", "Alla")
MAKE_PSTR_LIST(own_1, "own 1", "Eigen 1", "Eigen 1", "Egen 1")
MAKE_PSTR_LIST(family, "family", "Familie", "Familie", "Familj")
MAKE_PSTR_LIST(morning, "morning", "Morgends", "'s ochtends", "Morgon")
MAKE_PSTR_LIST(evening, "evening", "Abends", "'s avonds", "Kväll")
MAKE_PSTR_LIST(seniors, "seniors", "Senioren", "Senioren", "Seniorer")
MAKE_PSTR_LIST(no, "no", "nein", "nee", "nej")
MAKE_PSTR_LIST(new, "new", "Neu", "Nieuw", "Ny")
MAKE_PSTR_LIST(own_2, "own 2", "Eigen 2", "Eigen 2", "Egen 2")
MAKE_PSTR_LIST(singles, "singles", "Singles", "Singles", "Singlar")
MAKE_PSTR_LIST(am, "am", "Vormittag", "Ochtend", "Förmiddag")
MAKE_PSTR_LIST(pm, "pm", "Nachmittag", "Namiddag", "Eftermiddag")
MAKE_PSTR_LIST(midday, "midday", "Mittag", "Middag", "Middag")
MAKE_PSTR_LIST(unknown, "unknown", "Unbekannt", "Onbekend", "Okänt")
MAKE_PSTR_LIST(flat, "flat", "flach", "vlak", "Platt")
MAKE_PSTR_LIST(vacuum, "vacuum", "Vakuum", "vacuum", "Vakuum")
MAKE_PSTR_LIST(co2_optimized, "co2 optimized", "CO2 optimiert", "CO2 geoptimaliseerd", "CO2-optimerad")
MAKE_PSTR_LIST(cost_optimized, "cost optimized", "kostenoptimiert", "kosten geoptimaliseerd", "kostnadsoptimerad")
MAKE_PSTR_LIST(outside_temp_switched, "outside temp switched", "Außentemp. gesteuert", "Buitentemp. gestuurd", "Utomhustemp korrigerad")
MAKE_PSTR_LIST(co2_cost_mix, "co2 cost mix", "Kostenmix", "Kostenmix", "Kostnadsmix")
MAKE_PSTR_LIST(analog, "analog", "analog", "analoog", "analog")
MAKE_PSTR_LIST(normal, "normal", "normal", "normaal", "normal")
MAKE_PSTR_LIST(blocking, "blocking", "Blockierung", "Blokkering", "Blockering")

// boiler
MAKE_PSTR_LIST(time, "time", "Zeit", "Tijd", "Tid")
MAKE_PSTR_LIST(date, "date", "Datum", "Datum", "Datum")
MAKE_PSTR_LIST(continuous, "continuous", "kontinuierlich", "continue", "kontinuerlig")
MAKE_PSTR_LIST(3wayvalve, "3-way valve", "3-Wege Ventil", "3-weg klep", "trevägsventil")
MAKE_PSTR_LIST(chargepump, "chargepump", "Ladepumpe", "laadpomp", "laddpump")
MAKE_PSTR_LIST(hot, "hot", "Heiß", "Heet", "Het")
MAKE_PSTR_LIST(high_comfort, "high comfort", "gehobener Komfort", "Verhoogd comfort", "Förhöjd komfort")
MAKE_PSTR_LIST(eco, "eco", "Eco", "Eco", "Eko")
MAKE_PSTR_LIST(intelligent, "intelligent", "Intelligent", "Intelligent", "Intelligent")
MAKE_PSTR_LIST(flow, "flow", "Durchfluss", "Volumestroom", "Flöde")
MAKE_PSTR_LIST(manual, "manual", "Manuell", "Hamdmatig", "Manuell")
MAKE_PSTR_LIST(buffer, "buffer", "Speicher", "Buffer", "Buffert")
MAKE_PSTR_LIST(bufferedflow, "buffered flow", "Durchlaufspeicher", "Doorstroombuffer", "Buffertflöde")
MAKE_PSTR_LIST(layeredbuffer, "layered buffer", "Schichtspeicher", "Gelaagde buffer", "Lagrad buffert")
MAKE_PSTR_LIST(maintenance, "maintenance", "Wartung", "Onderhoud", "Underhåll")
MAKE_PSTR_LIST(heating, "heating", "Heizen", "Verwarmen", "Uppvärmning")
MAKE_PSTR_LIST(cooling, "cooling", "Kühlen", "Koelen", "Kyler")
MAKE_PSTR_LIST(disinfecting, "disinfecting", "Desinfizieren", "Desinfecteren", "Desinficerar")
MAKE_PSTR_LIST(no_heat, "no heat", "keine Wärme", "Geen warmte", "Ingen värme")
MAKE_PSTR_LIST(heatrequest, "heat request", "Wärmeanforderung", "Verwarmignsverzoek", "Värmeförfrågan")
MAKE_PSTR_LIST(valve, "valve", "Ventil", "Klep", "Ventil")

// heatpump
MAKE_PSTR_LIST(none, "none", "keine", "geen", "ingen")
MAKE_PSTR_LIST(hot_water, "hot water", "Warmwasser", "warm water", "varmvatten")
MAKE_PSTR_LIST(pool, "pool", "Pool", "zwembad", "pool")

// thermostat
MAKE_PSTR_LIST(seltemp, "selTemp", "Solltemperatur", "Doeltemperatuur", "Börtemperatur")
MAKE_PSTR_LIST(roomtemp, "roomTemp", "Raumtemperatur", "Kamertemperatuur", "Rumstemperatur")
MAKE_PSTR_LIST(own_prog, "own prog", "Eigenprog.", "Eigen prog.", "Egen prog.")
MAKE_PSTR_LIST(std_prog, "std prog", "Standardprog.", "Standaard prog.", "Standardprog.")
MAKE_PSTR_LIST(light, "light", "Leicht", "Licht", "Lätt")
MAKE_PSTR_LIST(medium, "medium", "Mittel", "Middel", "Medel")
MAKE_PSTR_LIST(heavy, "heavy", "Schwer", "Zwaar", "Tung")
MAKE_PSTR_LIST(start, "start", "Start", "Start", "Start")
MAKE_PSTR_LIST(heat, "heat", "Heizen", "Verwarmen", "Värme")
MAKE_PSTR_LIST(hold, "hold", "Halten", "Pauzeren", "Paus")
MAKE_PSTR_LIST(cool, "cool", "Kühlen", "Koelen", "Kyla")
MAKE_PSTR_LIST(end, "end", "Ende", "Einde", "Slut")
MAKE_PSTR_LIST(german, "german", "Deutsch", "Duits", "Tyska")
MAKE_PSTR_LIST(dutch, "dutch", "Niederländisch", "Nederlands", "Nederländska")
MAKE_PSTR_LIST(french, "french", "Französisch", "Frans", "Franska")
MAKE_PSTR_LIST(italian, "italian", "Italienisch", "Italiaans", "Italienska")
MAKE_PSTR_LIST(high, "high", "hoch", "hoog", "Hög")
MAKE_PSTR_LIST(low, "low", "niedrig", "laag", "Låg")
MAKE_PSTR_LIST(radiator, "radiator", "Heizkörper", "Radiator", "Radiator")
MAKE_PSTR_LIST(convector, "convector", "Konvektor", "Convector", "Konvektor")
MAKE_PSTR_LIST(floor, "floor", "Fussboden", "Vloer", "Golv")
MAKE_PSTR_LIST(summer, "summer", "Sommer", "Zomer", "Sommar")
MAKE_PSTR_LIST(winter, "winter", "Winter", "Winter", "Vinter")
MAKE_PSTR_LIST(outdoor, "outdoor", "Außen", "Buiten", "Utomhus")
MAKE_PSTR_LIST(room, "room", "Raum", "Kamer", "Rum")
MAKE_PSTR_LIST(room_outdoor, "room outdoor", "Raum+Außen", "Kamer+Buiten", "Rum+Ute")
MAKE_PSTR_LIST(power, "power", "Leistung", "Vermogen", "Effekt")
MAKE_PSTR_LIST(constant, "constant", "konstant", "constant", "Konstant")
MAKE_PSTR_LIST(simple, "simple", "einfach", "simpel", "enkel")
MAKE_PSTR_LIST(optimized, "optimized", "optimiert", "geoptimaliseerd", "optimerad")
MAKE_PSTR_LIST(nofrost, "nofrost", "Frostschutz", "Vorstbescherming", "Frostskydd")
MAKE_PSTR_LIST(comfort, "comfort", "Komfort", "Comfort", "Komfort")
MAKE_PSTR_LIST(night, "night", "Nacht", "Nacht", "Natt")
MAKE_PSTR_LIST(day, "day", "Tag", "Dag", "Dag")
MAKE_PSTR_LIST(holiday, "holiday", "Urlaub", "Vakantie", "Helgdag")
MAKE_PSTR_LIST(reduce, "reduce", "reduziert", "gereduceerd", "Reducera")
MAKE_PSTR_LIST(noreduce, "no reduce", "unreduziert", "niet gerduceerd", "oreducerad")
MAKE_PSTR_LIST(offset, "offset", "Anhebung", "offset", "Förskutning")
MAKE_PSTR_LIST(design, "design", "Auslegung", "Ontwero", "Design")
MAKE_PSTR_LIST(minflow, "min flow", "min. Durchfluss", "Min. Doorstroom", "Min flöde")
MAKE_PSTR_LIST(maxflow, "max flow", "max. Durchfluss", "Max. Doorstroom", "Max flöde")
MAKE_PSTR_LIST(fast, "fast", "schnell", "snel", "snabb")
MAKE_PSTR_LIST(slow, "slow", "langsam", "langzaam", "långsam")
MAKE_PSTR_LIST(internal_temperature, "internal temperature", "Interne Temperatur", "Interne Temperatuur", "Interntemperatur")
MAKE_PSTR_LIST(internal_setpoint, "internal setpoint", "Interner Sollwert", "Interne Streeftemperatuur", "Internt börvärde")
MAKE_PSTR_LIST(external_temperature, "external temperature", "Externe Temperatur", "Externe Temperatuur", "Extern temperatur")
MAKE_PSTR_LIST(burner_temperature, "burner temperature", "Brennertemperatur", "Brander Temperuur", "Brännartemperatur")
MAKE_PSTR_LIST(ww_temperature, "ww temperature", "Wassertemperatur", "Watertemperatuur", "Vattentemperatur")
MAKE_PSTR_LIST(smoke_temperature, "smoke temperature", "Abgastemperatur", "Buitentemperatuur", "Rökgastemperatur")
MAKE_PSTR_LIST(weather_compensated, "weather compensated", "Wetter kompensiert", "Weer gecompenseerd", "Väderkompenserad")
MAKE_PSTR_LIST(outside_basepoint, "outside basepoint", "Basispunkt Außentemp.", "Buiten basispunt", "Utomhus baspunkt")
MAKE_PSTR_LIST(functioning_mode, "functioning mode", "Funktionsweise", "Functiemodus", "Driftläge")

// mixer
MAKE_PSTR_LIST(stopped, "stopped", "gestoppt", "gestopt", "stoppad")
MAKE_PSTR_LIST(opening, "opening", "öffnen", "openen", "öppnar")
MAKE_PSTR_LIST(closing, "closing", "schließen", "sluiten", "stänger")
MAKE_PSTR_LIST(open, "open", "offen", "Open", "Öppen")
MAKE_PSTR_LIST(close, "close", "geschlossen", "Gesloten", "Stängd")

// solar ww
MAKE_PSTR_LIST(cyl1, "cyl 1", "Zyl_1", "Cil 1", "Cyl 1")
MAKE_PSTR_LIST(cyl2, "cyl 2", "Zyl_2", "Cil 2", "Cyl 2")

// Entity translations
// Boiler
MAKE_PSTR_LIST(wwtapactivated, "wwtapactivated", "turn on/off", "Durchlauferhitzer aktiv", "zet aan/uit", "sätt på/av")
MAKE_PSTR_LIST(reset, "reset", "Reset", "Reset", "Nollställ", "reset")
MAKE_PSTR_LIST(oilPreHeat, "oilpreheat", "oil preheating", "Ölvorwärmung", "Olie voorverwarming", "Förvärmning olja")
MAKE_PSTR_LIST(heatingActive, "heatingactive", "heating active", "Heizen aktiv", "Verwarming actief", "Uppvärmning aktiv")
MAKE_PSTR_LIST(tapwaterActive, "tapwateractive", "tapwater active", "Warmwasser aktiv", "Warm water actief", "Varmvatten aktiv")
MAKE_PSTR_LIST(selFlowTemp, "selflowtemp", "selected flow temperature", "Sollwert Vorlauftemperatur", "Ingestelde aanvoertemperatuur", "Börvärde Flödestemperatur")
MAKE_PSTR_LIST(selBurnPow, "selburnpow", "burner selected max power", "Sollwert Brennerleistung", "Ingestelde maximale brandervermogen", "Brännare vald maxeffekt")
MAKE_PSTR_LIST(heatingPumpMod, "heatingpumpmod", "heating pump modulation", "Heizungspumpe 1 Modulation", "Modulatie verwarmingspomp", "Modulering Värmepump")
MAKE_PSTR_LIST(heatingPump2Mod, "heatingpump2mod", "heating pump 2 modulation", "Heizungspumpe 2 Modulation", "Modulatie verwarmingspomp 2", "Modulering Värmepump 2")
MAKE_PSTR_LIST(outdoorTemp, "outdoortemp", "outside temperature", "Aussentemperatur", "Buitentemperatuur", "Utomhustemperatur")
MAKE_PSTR_LIST(curFlowTemp, "curflowtemp", "current flow temperature", "aktuelle Vorlauftemperatur", "Huidige aanvoertemperatuur", "Aktuell flödestemperatur")
MAKE_PSTR_LIST(retTemp, "rettemp", "return temperature", "Rücklauftemperatur", "Retourtemperatuur", "Returtemperatur")
MAKE_PSTR_LIST(switchTemp, "switchtemp", "mixing switch temperature", "Mischer Schalttemperatur", "Mixer temperatuur", "Blandartemperatur")
MAKE_PSTR_LIST(sysPress, "syspress", "system pressure", "Systemdruck", "Systeemdruk", "systemtryck")
MAKE_PSTR_LIST(boilTemp, "boiltemp", "actual boiler temperature", "Kesseltemperatur", "Keteltemperatuur", "Temperatur Värmepanna")
MAKE_PSTR_LIST(exhaustTemp, "exhausttemp", "exhaust temperature", "Abgastemperatur", "Uitlaattemperatuur", "Avgastemperatur")
MAKE_PSTR_LIST(burnGas, "burngas", "gas", "Gas", "Gas", "Gas")
MAKE_PSTR_LIST(burnGas2, "burngas2", "gas stage 2", "Gas Stufe 2", "gas fase 2", "Gas Fas 2")
MAKE_PSTR_LIST(flameCurr, "flamecurr", "flame current", "Flammenstrom", "Vlammenstroom", "Lågström")
MAKE_PSTR_LIST(heatingPump, "heatingpump", "heating pump", "Heizungspumpe", "Verwarmingspomp", "Värmepump")
MAKE_PSTR_LIST(fanWork, "fanwork", "fan", "Gebläse", "Ventilator", "Fläkt")
MAKE_PSTR_LIST(ignWork, "ignwork", "ignition", "Zündung", "Ontsteking", "Tändning")
MAKE_PSTR_LIST(heatingActivated, "heatingactivated", "heating activated", "Heizen aktiviert", "Verwarmen geactiveerd", "Uppvärmning aktiv")
MAKE_PSTR_LIST(heatingTemp, "heatingtemp", "heating temperature", "Heizungstemperatur", "Verwarmingstemperatuur", "Uppvärmningstemperatur")
MAKE_PSTR_LIST(pumpModMax, "pumpmodmax", "boiler pump max power", "Kesselpumpen Maximalleistung", "Ketelpomp max vermogen", "Värmepannepump max effekt")
MAKE_PSTR_LIST(pumpModMin, "pumpmodmin", "boiler pump min power", "Kesselpumpen Minmalleistung", "Ketelpomp min vermogen", "Värmepannepump min effekt")
MAKE_PSTR_LIST(pumpDelay, "pumpdelay", "pump delay", "Pumpennachlaufzeit", "Pomp nalooptijd", "Pumpfördröjning")
MAKE_PSTR_LIST(burnMinPeriod, "burnminperiod", "burner min period", "Antipendelzeit", "Antipendeltijd", "Värmepanna Min Period")
MAKE_PSTR_LIST(burnMinPower, "burnminpower", "burner min power", "minimale Brennerleistung", "Minimaal brandervermogen", "Värmepanna Min Effekt")
MAKE_PSTR_LIST(burnMaxPower, "burnmaxpower", "burner max power", "maximale Brennerleistung", "Maximaal brandervermogen", "Värmepanna Max Effekt")
MAKE_PSTR_LIST(boilHystOn, "boilhyston", "hysteresis on temperature", "Einschaltdifferenz", "ketel aan hysterese verschil", "Hysteres aktiveringstemperatur")
MAKE_PSTR_LIST(boilHystOff, "boilhystoff", "hysteresis off temperature", "Ausschaltdifferenz", "ketel uit hysterese verschil", "Hysteres inaktiveringstemperatur")
MAKE_PSTR_LIST(setFlowTemp, "setflowtemp", "set flow temperature", "Sollwert Vorlauftemperatur", "Ingestelde aanvoertemperatuur", "Börvärde Flödestemperatur")
MAKE_PSTR_LIST(setBurnPow, "setburnpow", "burner set power", "Sollwert Brennerleistung", "Ingesteld brandervermogen", "Värmepanna vald Effekt")
MAKE_PSTR_LIST(curBurnPow, "curburnpow", "burner current power", "Brennerleistung", "Brandervermogen", "Värmepanna aktuell effekt")
MAKE_PSTR_LIST(burnStarts, "burnstarts", "burner starts", "Brenner Starts", "Aantal brander starts", "Värmepanna antal starter")
MAKE_PSTR_LIST(burnWorkMin, "burnworkmin", "total burner operating time", "Brenner Laufzeit", "Totale branderlooptijd", "Värmepanna aktiva timmar")
MAKE_PSTR_LIST(burn2WorkMin,
               "burn2workmin",
               "burner stage 2 operating time",
               "Brenner Stufe 2 Laufzeit",
               "Totale looptijd brander fase 2",
               "Värmepanna steg 2 aktiva timmar")
MAKE_PSTR_LIST(heatWorkMin, "heatworkmin", "total heat operating time", "Heizung Laufzeit", "Totale looptijd verwarming", "Uppvärmning aktiva timmar")
MAKE_PSTR_LIST(UBAuptime, "ubauptime", "total UBA operating time", "Anlagen-Gesamtlaufzeit", "totale looptijd branderautomaat (UBA)", "Total Tid")
MAKE_PSTR_LIST(lastCode, "lastcode", "last error code", "Fehlerspeicher", "Laatste foutcode", "Senaste Felkod")
MAKE_PSTR_LIST(serviceCode, "servicecode", "service code", "Statusmeldung", "Statuscode", "Servicekod")
MAKE_PSTR_LIST(serviceCodeNumber, "servicecodenumber", "service code number", "Statusmeldungsnummer", "Status codenummer", "Servicekodsnummer")
MAKE_PSTR_LIST(maintenanceMessage, "maintenancemessage", "maintenance message", "Wartungsmeldung", "Onderhoudsmelding", "Servicemeddelande")
MAKE_PSTR_LIST(maintenanceDate, "maintenancedate", "next maintenance date", "Wartungsdatum", "Onderhoudsdatum", "Datum nästa Service")
MAKE_PSTR_LIST(maintenanceType, "maintenance", "maintenance scheduled", "Wartungsplan", "Onderhoud gepland", "Underhåll schemlagt")
MAKE_PSTR_LIST(maintenanceTime, "maintenancetime", "time to next maintenance", "Wartung in", "Onderhoud in", "Tid till nästa underhåll")
MAKE_PSTR_LIST(emergencyOps, "emergencyops", "emergency operation", "Notoperation", "Noodoperatie", "Nöddrift")
MAKE_PSTR_LIST(emergencyTemp, "emergencytemp", "emergency temperature", "Nottemperatur", "Noodtemperatuur", "Nödtemperatur")

// heatpump/compress specific
MAKE_PSTR_LIST(upTimeControl, "uptimecontrol", "total operating time heat", "Betriebszeit Heizen gesamt", "Totale bedrijfstijd", "Total tid uppvärmning")
MAKE_PSTR_LIST(upTimeCompHeating,
               "uptimecompheating",
               "operating time compressor heating",
               "Betriebszeit Kompressor heizen",
               "Bedrijfstijd compressor verwarmingsbedrijf",
               "Total tid kompressor uppvärmning")
MAKE_PSTR_LIST(upTimeCompCooling,
               "uptimecompcooling",
               "operating time compressor cooling",
               "Betriebszeit Kompressor kühlen",
               "Bedrijfstijd compressor koelbedrijf",
               "Total tid kompressor kyla")
MAKE_PSTR_LIST(upTimeCompWw,
               "uptimecompww",
               "operating time compressor dhw",
               "Betriebszeit Kompressor",
               "Bedrijfstijd compressor warmwaterbedrijf",
               "Total tid kompressor varmvatten")
MAKE_PSTR_LIST(upTimeCompPool,
               "uptimecomppool",
               "operating time compressor pool",
               "Betriebszeit Kompressor Pool",
               "Bedrijfstijd compressor voor zwembadbedrijf",
               "Total tid kompressor pool")
MAKE_PSTR_LIST(totalCompStarts, "totalcompstarts", "total compressor control starts", "Kompressor Starts gesamt", "Totaal compressorstarts", "Kompressorstarter Totalt")
MAKE_PSTR_LIST(heatingStarts, "heatingstarts", "heating control starts", "Heizen Starts", "Starts verwarmingsbedrijf", "Kompressorstarter Uppvärmning")
MAKE_PSTR_LIST(coolingStarts, "coolingstarts", "cooling control starts", "Kühlen Starts", "Starts koelbedrijf", "Kompressorstarter Kyla")
MAKE_PSTR_LIST(poolStarts, "poolstarts", "pool control starts", "Pool Starts", "Starts zwembadbedrijf", "Kompressorstarter Pool")
MAKE_PSTR_LIST(nrgConsTotal, "nrgconstotal", "total energy consumption", "totaler Energieverbrauch", "Energieverbrauch gesamt", "Energieverbruik totaal")
MAKE_PSTR_LIST(nrgConsCompTotal,
               "nrgconscomptotal",
               "total energy consumption compressor",
               "Energieverbrauch Kompressor gesamt",
               "Energieverbruik compressor totaal",
               "Energiförbrukning kompressor")
MAKE_PSTR_LIST(nrgConsCompHeating,
               "nrgconscompheating",
               "energy consumption compressor heating",
               "Energieverbrauch Kompressor heizen",
               "Energieverbruik compressor verwarmingsbedrijf",
               "Energiförbrukning uppvärmning")
MAKE_PSTR_LIST(nrgConsCompWw,
               "nrgconscompww",
               "energy consumption compressor dhw",
               "Energieverbrauch Kompressor",
               "Energieverbruik compressor warmwaterbedrijf",
               "Energiförbrukning varmvatten")
MAKE_PSTR_LIST(nrgConsCompCooling,
               "nrgconscompcooling",
               "energy consumption compressor cooling",
               "Energieverbrauch Kompressor kühlen",
               "Energieverbruik compressor koelbedrijf",
               "Energiförbrukning kyla")
MAKE_PSTR_LIST(nrgConsCompPool,
               "nrgconscomppool",
               "energy consumption compressor pool",
               "Energieverbrauch Kompressor Pool",
               "Energiebedrijf compressor zwembadbedrijf",
               "Energiförbrukning pool")
MAKE_PSTR_LIST(nrgSuppTotal, "nrgsupptotal", "total energy supplied", "gesamte Energieabgabe", "Totaal opgewekte energie", "Tillförd energi")
MAKE_PSTR_LIST(nrgSuppHeating,
               "nrgsuppheating",
               "total energy supplied heating",
               "gesamte Energieabgabe heizen",
               "Opgewekte energie verwarmingsbedrijf",
               "Tillförd energi Uppvärmning")
MAKE_PSTR_LIST(nrgSuppWw, "nrgsuppww", "total energy warm supplied dhw", "gesamte Energieabgabe", "Opgewekte energie warmwaterbedrijf", "Tillförd energi Varmvatten")
MAKE_PSTR_LIST(nrgSuppCooling, "nrgsuppcooling", "total energy supplied cooling", "gesamte Energieabgabe kühlen", "Opgewekte energie koelbedrijf", "Tillförd energi Kyla")
MAKE_PSTR_LIST(nrgSuppPool, "nrgsupppool", "total energy supplied pool", "gesamte Energieabgabe Pool", "Opgewekte energie zwembadbedrijf", "TIllförd energi Pool")
MAKE_PSTR_LIST(auxElecHeatNrgConsTotal,
               "auxelecheatnrgconstotal",
               "total auxiliary electrical heater energy consumption",
               "Energieverbrauch el. Zusatzheizung",
               "Totaal energieverbruik electrisch verwarmingselement",
               "Energiförbrukning Elpatron")
MAKE_PSTR_LIST(auxElecHeatNrgConsHeating,
               "auxelecheatnrgconsheating",
               "auxiliary electrical heater energy consumption heating",
               "Energieverbrauch el. Zusatzheizung Heizen",
               "Energieverbruik electrisch verwarmingselement voor verwarmingsbedrijf",
               "Energiförbrukning Elpatron Uppvärmning")
MAKE_PSTR_LIST(auxElecHeatNrgConsWW,
               "auxelecheatnrgconsww",
               "auxiliary electrical heater energy consumption dhw",
               "Energieverbrauch el. Zusatzheizung",
               "Energieverbruik electrisch verwarmingselement voor warmwaterbedrijf",
               "Energiförbrukning Elpatron Varmvatten")
MAKE_PSTR_LIST(auxElecHeatNrgConsPool,
               "auxelecheatnrgconspool",
               "auxiliary electrical heater energy consumption pool",
               "Energieverbrauch el. Zusatzheizung Pool",
               "Energieverbruik electrisch verwarmingselement voor zwembadbedrijf",
               "Energiförbrukning Elpatron Pool")

MAKE_PSTR_LIST(hpCompOn, "hpcompon", "hp compressor", "WP Kompressor", "WP compressor", "VP Kompressor")
MAKE_PSTR_LIST(hpHeatingOn, "hpheatingon", "hp heating", "WP Heizen", "WP verwarmingsbedrijf", "VP Uppvärmning")
MAKE_PSTR_LIST(hpCoolingOn, "hpcoolingon", "hp cooling", "WP Kühlen", "WP koelbedrijf", "VP Kyla")
MAKE_PSTR_LIST(hpWwOn, "hpwwon", "hp dhw", "WP Warmwasser", "WP warmwaterbedrijf", "VP Varmvatten")
MAKE_PSTR_LIST(hpPoolOn, "hppoolon", "hp pool", "WP Pool", "WP zwembadbedrijf", "VP Pool")
MAKE_PSTR_LIST(hpBrinePumpSpd, "hpbrinepumpspd", "brine pump speed", "Solepumpen-Geschw.", "Snelheid pekelpomp", "Hastighet Brine-pump")
MAKE_PSTR_LIST(hpCompSpd, "hpcompspd", "compressor speed", "Kompressor-Geschw.", "Snelheid compressor", "Kompressorhastighet")
MAKE_PSTR_LIST(hpCircSpd, "hpcircspd", "circulation pump speed", "Zirkulationspumpen-Geschw.", "Snelheid circulatiepomp", "Hastighet Cirkulationspump")
MAKE_PSTR_LIST(hpBrineIn, "hpbrinein", "brine in/evaporator", "Sole in/Verdampfer", "pekel in/verdamper", "Brine in/förångare")
MAKE_PSTR_LIST(hpBrineOut, "hpbrineout", "brine out/condenser", "Sole aus/Kondensator", "pekel uit/condensor", "Brine ut/kondensor")
MAKE_PSTR_LIST(hpSuctionGas, "hpsuctiongas", "suction gas", "Gasansaugung", "Gasaanzuiging", "Gasintag")
MAKE_PSTR_LIST(hpHotGas, "hphotgas", "hot gas/compressed", "Heißgas/verdichtet", "heet gas/samengeperst", "Hetgas/komprimerad")
MAKE_PSTR_LIST(hpSwitchValve, "hpswitchvalve", "switch valve", "Schaltventil", "schakelklep", "Växelventil")
MAKE_PSTR_LIST(hpActivity, "hpactivity", "compressor activity", "Kompressoraktivität", "Compressoractiviteit", "Kompressoraktivitet")

MAKE_PSTR_LIST(hpPower, "hppower", "compressor power output", "Kompressorleistung", "Compressorvermogen", "Kompressoreffekt")
MAKE_PSTR_LIST(hpTc0, "hptc0", "heat carrier return (TC0)", "Kältemittel Rücklauf (TC0)", "Koudemiddel retour (TC0O", "Värmebärare Retur (TC0)")
MAKE_PSTR_LIST(hpTc1, "hptc1", "heat carrier forward (TC1)", "Kältemittel Vorlauf (TC1)", "Koudemiddel aanvoer (TC1)", "Värmebärare Framledning (TC1)")
MAKE_PSTR_LIST(hpTc3, "hptc3", "condenser temperature (TC3)", "Verflüssigertemperatur (TC3)", "Condensortemperatuur (TC3)", "Kondensortemperatur (TC3)")
MAKE_PSTR_LIST(hpTr3,
               "hptr3",
               "refrigerant temperature liquid side (condenser output) (TR3)",
               "Kältemittel (flüssig) (TR3)",
               "Temperatuur koudemiddel vloeibare zijde (TR3)",
               "Köldmedium temperatur (kondensorutlopp) (TR3)")
MAKE_PSTR_LIST(hpTr4, "hptr4", "evaporator inlet temperature (TR4)", "Verdampfer Eingang (TR4)", "Verdamper ingangstemperatuur (TR4)", "Förångare inloppstemp (TR4)")
MAKE_PSTR_LIST(hpTr5, "hptr5", "compressor inlet temperature (TR5)", "Kompessoreingang (TR5)", "Compressor ingangstemperatuur (TR5)", "Kompressor inloppstemp (TR5)")
MAKE_PSTR_LIST(hpTr6, "hptr6", "compressor outlet temperature (TR6)", "Kompressorausgang (TR6)", "Compressor uitgangstemperatuur (TR6)", "Kompressor utloppstemp (TR6)")
MAKE_PSTR_LIST(hpTr7,
               "hptr7",
               "refrigerant temperature gas side (condenser input) (TR7)",
               "Kältemittel (gasförmig) (TR7)",
               "Temperatuur koudemiddel gasvormig (TR7)",
               "Köldmedium temperatur gassida (kondensorinlopp) (TR7)")
MAKE_PSTR_LIST(hpTl2, "hptl2", "air inlet temperature (TL2)", "Außenluft-Einlasstemperatur (TL2)", "Temperatuur luchtinlaat (TL2)", "Luftintagstemperatur (TL2)")
MAKE_PSTR_LIST(hpPl1, "hppl1", "low pressure side temperature (PL1)", "Niederdruckfühler (PL1)", "Temperatuur lage drukzijde (PL1)", "Temperatur Lågtryckssidan (PL1)")
MAKE_PSTR_LIST(hpPh1, "hpph1", "high pressure side temperature (PH1)", "Hochdruckfühler (PH1)", "Temperatuur hoge drukzijde (PH1)", "Temperatur Högtryckssidan (PH1)")

MAKE_PSTR_LIST(hpInput1, "hpin1", "input 1 state", "Eingang 1 Status", "Status input 1", "Status Ingång 1")
MAKE_PSTR_LIST(hpInput2, "hpin2", "input 2 state", "Eingang 2 Status", "Status input 2", "Status Ingång 2")
MAKE_PSTR_LIST(hpInput3, "hpin3", "input 3 state", "Eingang 3 Status", "Status input 3", "Status Ingång 3")
MAKE_PSTR_LIST(hpInput4, "hpin4", "input 4 state", "Eingang 4 Status", "Status input 4", "Status Ingång 4")
MAKE_PSTR_LIST(hpIn1Opt, "hpin1opt", "input 1 options", "Eingang 1 Einstellung", "Instelling input 1", "Inställningar Ingång 1")
MAKE_PSTR_LIST(hpIn2Opt, "hpin2opt", "input 2 options", "Eingang 2 Einstellung", "Instelling input 2", "Inställningar Ingång 2")
MAKE_PSTR_LIST(hpIn3Opt, "hpin3opt", "input 3 options", "Eingang 3 Einstellung", "Instelling input 3", "Inställningar Ingång 3")
MAKE_PSTR_LIST(hpIn4Opt, "hpin4opt", "input 4 options", "Eingang 4 Einstellung", "Instelling input 4", "Inställningar Ingång 4")

// hybrid heatpump
MAKE_PSTR_LIST(hybridStrategy, "hybridstrategy", "hybrid control strategy", "Hybrid Strategie", "Hybride strategie", "Hybrid kontrollstrategi")
MAKE_PSTR_LIST(switchOverTemp,
               "switchovertemp",
               "outside switchover temperature",
               "Außentemperatur für Umschaltung",
               "Schakeltemperatuur buitentemperatuur",
               "Utomhus Omställningstemperatur")
MAKE_PSTR_LIST(energyCostRatio, "energycostratio", "energy cost ratio", "Energie/Kosten-Verhältnis", "Energiekostenratio", "Energi/Kostnads-förhållande")
MAKE_PSTR_LIST(fossileFactor, "fossilefactor", "fossile energy factor", "Energiefaktor Fossil", "Energiefactor fossiele brandstof", "Energifaktor fossilenergi")
MAKE_PSTR_LIST(electricFactor, "electricfactor", "electric energy factor", "Energiefaktor elektrisch", "Energiefactor electrisch", "Elektrisk energifaktor")
MAKE_PSTR_LIST(delayBoiler, "delayboiler", "delay boiler support", "Verzögerungs-Option", "Vertragingsoptie", "Fördörjningsoption")
MAKE_PSTR_LIST(tempDiffBoiler, "tempdiffboiler", "temp diff boiler support", "Temperaturdifferenz-Option", "Verschiltemperatuuroptie", "Temperaturskillnadsoption")

// alternative heatsource AM200
MAKE_PSTR_LIST(aCylTopTemp, "cyltoptemp", "cylinder top temperature", "Speichertemperatur Oben", "Buffer temperatuur boven", "Cylindertemperatur Toppen")
MAKE_PSTR_LIST(aCylCenterTemp, "cylcentertemp", "cylinder center temperature", "Speichertemperatur Mitte", "Buffer temperatuur midden", "Cylindertemperatur Mitten")
MAKE_PSTR_LIST(aCylBottomTemp, "cylbottomtemp", "cylinder bottom temperature", "Speichertemperatur Unten", "Buffer temperatuur onder", "Cylindertemperatur Botten")
MAKE_PSTR_LIST(aFlowTemp,
               "altflowtemp",
               "alternative hs flow temperature",
               "Alternativer WE Vorlauftemperatur",
               "Alternatieve warmtebron aanvoertemperatuur",
               "Alternativ flödestemp värmekälla")
MAKE_PSTR_LIST(aRetTemp,
               "altrettemp",
               "alternative hs return temperature",
               "Alternativer WE Rücklauftemperatur",
               "Alternatieve warmtebron retourtemperatuur",
               "Alternativ returtemp värmekälla")
MAKE_PSTR_LIST(sysFlowTemp, "sysflowtemp", "system flow temperature", "System Vorlauftemperatur", "Systeem aanvoertemperatuur", "Systemflödestemperatur")
MAKE_PSTR_LIST(sysRetTemp, "sysrettemp", "system return temperature", "System Rücklauftemperatur", "Systeem retourtemperatuur", "Systemreturtemperatur")
MAKE_PSTR_LIST(valveByPass, "valvebypass", "bypass valve", "Bypass-Ventil", "Bypass klep", "Bypassventil")
MAKE_PSTR_LIST(valveBuffer, "valvebuffer", "buffer valve", "Puffer-Ventil", "Bufferklep", "Buffertventil")
MAKE_PSTR_LIST(valveReturn, "valvereturn", "return valve", "Rückfluss-Ventil", "Retourklep", "Returventil")
MAKE_PSTR_LIST(aPumpMod,
               "altpumpmod",
               "alternative hs pump modulation",
               "Alternativer WE Pumpenmodulation",
               "Alternatieve warmtebron pomp modulatie",
               "Alternativ Pumpmodulering Värmekälla")
MAKE_PSTR_LIST(heatSource, "heatsource", "alternative heating active", "Alternativer Wärmeerzeuger aktiv", "Alternatieve warmtebron aktief", "Alternativ Värmekälla aktiv")

MAKE_PSTR_LIST(vr2Config, "vr2config", "vr2 configuration", "VR2 Konfiguration", "VR2 configuratie", "VR2 Konfiguration")
MAKE_PSTR_LIST(ahsActivated,
               "ahsactivated",
               "alternate heat source activation",
               "Alt. Wärmeerzeuger aktiviert",
               "Altenatieve warmtebron geactiveerd",
               "Alternativ värmekälla aktivering")
MAKE_PSTR_LIST(aPumpConfig, "apumpconfig", "primary pump config", "Konfig. Hauptpumpe", "Primaire pomp configuratie", "Konfiguration Primärpump")
MAKE_PSTR_LIST(aPumpSignal, "apumpsignal", "output for pr1 pump", "Ausgang Pumpe PR1", "Output voor pomp PR1", "Utgång från pump PR1")
MAKE_PSTR_LIST(aPumpMin, "apumpmin", "min output pump pr1", "Minimale Pumpenansteuerung", "Minimale output pomp PR1", "Min Output Pump PR1")
MAKE_PSTR_LIST(tempRise, "temprise", "ahs return temp rise", "Rücklauf Temperaturerhöhung", "Verhoging retourtemperatuur", "Förhöjd returtemperatur")
MAKE_PSTR_LIST(setReturnTemp, "setreturntemp", "set temp return", "Soll-Rücklauftemperatur", "Streeftemperatuur retour", "Vald returtemperatur")
MAKE_PSTR_LIST(mixRuntime, "mixruntime", "mixer run time", "Mischer-Laufzeit", "Mixer looptijd", "Blandningsventil drifttid")
MAKE_PSTR_LIST(bufBypass, "bufbypass", "buffer bypass config", "Puffer-Bypass Konfig.", "Buffer bypass configuratie", "Konfiguration Buffer bypass")
MAKE_PSTR_LIST(bufMixRuntime, "bufmixruntime", "bypass mixer run time", "Speicher-Mischer-Laufzeit", "Buffer mixer looptijd", "Blandningsventil Bypass drifttid")
MAKE_PSTR_LIST(bufConfig, "bufconfig", "dhw buffer config", "Konfig. Warmwasserspeicher", "Warmwater boiler configuratie", "Konfiguration Varmvattentank")
MAKE_PSTR_LIST(blockMode, "blockmode", "config htg. blocking mode", "Konfig. Sperr-Modus", "Configuratie blokeermodus", "Konfiguration Blockeringsläge")
MAKE_PSTR_LIST(blockTerm, "blockterm", "config of block terminal", "Konfig. Sperrterminal", "Configuratie blookerterminal", "Konfiguration Blockeringsterminal")
MAKE_PSTR_LIST(blockHyst, "blockhyst", "hyst. for boiler block", "Hysterese Sperrmodus", "Hysterese blokeerterminal", "Hysteres Blockeringsmodul")
MAKE_PSTR_LIST(releaseWait, "releasewait", "boiler release wait time", "Wartezeit Kessel-Freigabe", "Wachttijd ketel vrijgave", "Väntetid Frisläppning")

// the following are dhw for the boiler and automatically tagged with 'dhw'
MAKE_PSTR_LIST(wwSelTempLow, "wwseltemplow", "selected lower temperature", "untere Solltemperatur", "Onderste streeftemperatuur", "Vald lägstatemperatur")
MAKE_PSTR_LIST(wwSelTempOff, "wwseltempoff", "selected temperature for off", "Solltemperatur bei AUS", "Streeftemperatuur bij UIT", "Vald tempereatur för AV")
MAKE_PSTR_LIST(wwSelTempSingle,
               "wwseltempsingle",
               "single charge temperature",
               "Solltemperatur Einmalladung",
               "Streeftemperatuur enkele lading",
               "Temperatur Engångsladdning")
MAKE_PSTR_LIST(wwCylMiddleTemp,
               "wwcylmiddletemp",
               "cylinder middle temperature (TS3)",
               "Speichertemperature Mitte",
               "Buffer temperatuur midden",
               "Cylinder Temperatur Mitten (TS3)")

MAKE_PSTR_LIST(wwSelTemp, "wwseltemp", "selected temperature", "gewählte Temperatur", "Geselecteerd temperatuur", "Vald Temperatur")
MAKE_PSTR_LIST(wwSetTemp, "wwsettemp", "set temperature", "Solltemperatur", "Streeftemperatuut", "Börtempertur")
MAKE_PSTR_LIST(wwType, "wwtype", "type", "Typ", "type", "Typ")
MAKE_PSTR_LIST(wwComfort, "wwcomfort", "comfort", "Komfort", "Comfort", "Komfort")
MAKE_PSTR_LIST(wwComfort1, "wwcomfort1", "comfort mode", "Komfort-Modus", "Comfort modus", "Komfortläge")
MAKE_PSTR_LIST(wwFlowTempOffset, "wwflowtempoffset", "flow temperature offset", "Vorlauftemperaturanhebung", "Aanvoertemperatuur offset", "Flödestemperatur förskjutning")
MAKE_PSTR_LIST(wwMaxPower, "wwmaxpower", "max power", "max Leistung", "Maximaal vermogen", "Max Effekt")
MAKE_PSTR_LIST(wwCircPump, "wwcircpump", "circulation pump available", "Zirkulationspumpe vorhanden", "Circulatiepomp aanwezig", "Cirkulationspump tillgänglig")
MAKE_PSTR_LIST(wwChargeType, "wwchargetype", "charging type", "Speicher-Ladungstyp", "Buffer laadtype", "Laddningstyp")
MAKE_PSTR_LIST(wwDisinfectionTemp, "wwdisinfectiontemp", "disinfection temperature", "Desinfektionstemperatur", "Desinfectietemperatuur", "Desinfektionstemperatur")
MAKE_PSTR_LIST(wwCircMode, "wwcircmode", "circulation pump mode", "Zirkulationspumpen-Modus", "Modus circulatiepomp", "Läge Cirkulationspump")
MAKE_PSTR_LIST(wwCirc, "wwcirc", "circulation active", "Zirkulation aktiv", "Circulatiepomp actief", "Cirkulation aktiv")
MAKE_PSTR_LIST(wwCurTemp, "wwcurtemp", "current intern temperature", "aktuelle interne Temperatur", "Huidige interne temperatuur", "Aktuell Intern Temperatur")
MAKE_PSTR_LIST(wwCurTemp2, "wwcurtemp2", "current extern temperature", "aktuelle externe Temperatur", "Huidige externe temperatuur", "Aktuell Extern Temperatur")
MAKE_PSTR_LIST(wwCurFlow, "wwcurflow", "current tap water flow", "aktueller Durchfluss", "Hudige warmwater doorstroming", "Aktuellt tappvattenflöde")
MAKE_PSTR_LIST(wwStorageTemp1, "wwstoragetemp1", "storage intern temperature", "interne Speichertemperature", "Interne buffertemperatuur", "Beredare Intern Temperatur")
MAKE_PSTR_LIST(wwStorageTemp2, "wwstoragetemp2", "storage extern temperature", "externer Speichertemperatur", "Externe buffertemperatuur", "Beredare Extern Tempereatur")
MAKE_PSTR_LIST(wwActivated, "wwactivated", "activated", "aktiviert", "geactiveerd", "Aktiverad")
MAKE_PSTR_LIST(wwOneTime, "wwonetime", "one time charging", "Einmalladung", "Buffer eenmalig laden", "Engångsladdning")
MAKE_PSTR_LIST(wwDisinfecting, "wwdisinfecting", "disinfecting", "Desinfizieren", "Desinfectie", "Desinficerar")
MAKE_PSTR_LIST(wwCharging, "wwcharging", "charging", "Laden", "Laden", "Laddar")
MAKE_PSTR_LIST(wwChargeOptimization, "wwchargeoptimization", "charge optimization", "Ladungsoptimierung", "laadoptimalisatie", "Laddningsoptimering")
MAKE_PSTR_LIST(wwRecharging, "wwrecharging", "recharging", "Nachladen", "herladen", "Omladdar")
MAKE_PSTR_LIST(wwTempOK, "wwtempok", "temperature ok", "Temperatur ok", "Temperatuur OK", "Temperatur OK")
MAKE_PSTR_LIST(wwActive, "wwactive", "active", "aktiv", "Actief", "Aktiv")
MAKE_PSTR_LIST(ww3wayValve, "ww3wayvalve", "3-way valve active", "3-Wegeventil aktiv", "3-wegklep actief", "Trevägsventil Aktiv")
MAKE_PSTR_LIST(wwSetPumpPower, "wwsetpumppower", "set pump power", "Soll Pumpenleistung", "Streefwaarde pompvermogen", "Vald pumpeffekt")
MAKE_PSTR_LIST(wwMixerTemp, "wwmixertemp", "mixer temperature", "Mischertemperatur", "Mixertemperatuur", "Blandningsventil-tempertur")
MAKE_PSTR_LIST(wwStarts, "wwstarts", "starts", "Anzahl Starts", "Aantal starts", "Antal Starter")
MAKE_PSTR_LIST(wwStarts2, "wwstarts2", "control starts2", "Kreis 2 Anzahl Starts", "Aantal starts circuit 2", "Antal Starter Krets 2")
MAKE_PSTR_LIST(wwWorkM, "wwworkm", "active time", "aktive Zeit", "Actieve tijd", "Aktiv Tid")
MAKE_PSTR_LIST(wwHystOn, "wwhyston", "hysteresis on temperature", "Einschalttemperaturdifferenz", "Inschakeltemperatuurverschil", "Hysteres PÅ-temperatur")
MAKE_PSTR_LIST(wwHystOff, "wwhystoff", "hysteresis off temperature", "Ausschalttemperaturdifferenz", "Uitschakeltemperatuurverschil", "Hysteres AV-temperatur")
MAKE_PSTR_LIST(wwProgMode, "wwprogmode", "program", "Programmmodus", "Programma", "Program")
MAKE_PSTR_LIST(wwCircProg, "wwcircprog", "circulation program", "Zirkulationsprogramm", "Circulatieprogramma", "Cirkulationsprogram")
MAKE_PSTR_LIST(wwMaxTemp, "wwmaxtemp", "maximum temperature", "Maximale Temperatur", "Maximale temperatuur", "Maximal Temperatur")
MAKE_PSTR_LIST(wwOneTimeKey, "wwonetimekey", "one time key function", "Einmalladungstaste", "Knop voor eenmalig laden buffer", "Engångsfunktion")

// mqtt values / commands
MAKE_PSTR_LIST(switchtime, "switchtime", "program switchtime", "Programm Schaltzeit", "Programma schakeltijd", "Program Bytestid")
MAKE_PSTR_LIST(switchtime1, "switchtime1", "own1 program switchtime", "Programm 1 Schaltzeit", "Schakeltijd programma 1", "Program 1 Bytestid")
MAKE_PSTR_LIST(switchtime2, "switchtime2", "own2 program switchtime", "Programm 2 Schaltzeit", "Schakeltijd programma 2", "Program 2 Bytestid")
MAKE_PSTR_LIST(wwswitchtime, "wwswitchtime", "program switchtime", "Programm Schaltzeit", "Warm water programma schakeltijd", "Varmvattenprogram Bytestid")
MAKE_PSTR_LIST(wwcircswitchtime,
               "wwcircswitchtime",
               "circulation program switchtime",
               "Zirculationsprogramm Schaltzeit",
               "Schakeltijd circulatieprogramma",
               "Cirkulationsprogram Bytestid")
MAKE_PSTR_LIST(dateTime, "datetime", "date/time", "Datum/Zeit", "Datum/Tijd", "Datum/Tid")
MAKE_PSTR_LIST(errorCode, "errorcode", "error code", "Fehlermeldung", "Foutmeldingscode", "Felkod")
MAKE_PSTR_LIST(ibaMainDisplay, "display", "display", "Anzeige", "Display", "Display")
MAKE_PSTR_LIST(ibaLanguage, "language", "language", "Sprache", "Taal", "Språk")
MAKE_PSTR_LIST(ibaClockOffset, "clockoffset", "clock offset", "Uhrkorrektur", "Klokcorrectie", "Tidskorrigering")
MAKE_PSTR_LIST(ibaBuildingType, "building", "building type", "Gebäudetyp", "", "Byggnadstyp")
MAKE_PSTR_LIST(heatingPID, "heatingpid", "heating PID", "Heizungs-PID", "", "Uppvärmning PID")
MAKE_PSTR_LIST(ibaCalIntTemperature, "intoffset", "internal temperature offset", "Korrektur interner Temperatur", "", "Korrigering interntemperatur")
MAKE_PSTR_LIST(ibaMinExtTemperature, "minexttemp", "minimal external temperature", "min. Aussentemperatur", "", "Min Extern Temperatur")
MAKE_PSTR_LIST(backlight, "backlight", "key backlight", "Gegenlicht", "Toetsverlichting", "Bakgrundsbelysning")
MAKE_PSTR_LIST(damping, "damping", "damping outdoor temperature", "Dämpfung der Außentemperatur", "Demping buitentemperatuur", "Dämpning Utomhustemperatur")
MAKE_PSTR_LIST(tempsensor1, "inttemp1", "temperature sensor 1", "Temperatursensor 1", "Temperatuursensor 1", "Temperatursensor 1")
MAKE_PSTR_LIST(tempsensor2, "inttemp2", "temperature sensor 2", "Temperatursensor 2", "Temperatuursensor 2", "Temperatursensor 2")
MAKE_PSTR_LIST(dampedoutdoortemp, "dampedoutdoortemp", "damped outdoor temperature", "gedämpfte Außentemperatur", "Gedempte buitentemperatuur", "Dämpad Utomhustemperatur")
MAKE_PSTR_LIST(floordrystatus, "floordry", "floor drying", "Estrichtrocknung", "Vloerdroogprogramma", "Golvtorkning")
MAKE_PSTR_LIST(floordrytemp, "floordrytemp", "floor drying temperature", "Estrichtrocknungs Temperatur", "Temperatuur vloerdroogprogramma", "Golvtorkning Temperatur")
MAKE_PSTR_LIST(brightness, "brightness", "screen brightness", "Bildschirmhelligkeit", "Schermhelderheid", "Ljusstyrka")
MAKE_PSTR_LIST(autodst,
               "autodst",
               "automatic change daylight saving time",
               "automatische Sommerzeit Umstellung",
               "Automatische omschakeling zomer-wintertijd",
               "Automatisk växling sommar/vinter-tid")
MAKE_PSTR_LIST(preheating,
               "preheating",
               "preheating in the clock program",
               "Vorheizen im Zeitprogramm",
               "Voorverwarming in het klokprogramma",
               "Förvärmning i tidsprogram")
MAKE_PSTR_LIST(offtemp, "offtemp", "temperature when mode is off", "Temperatur bei AUS", "Temperatuur bij UIT", "Temperatur Avslagen")
MAKE_PSTR_LIST(mixingvalves, "mixingvalves", "mixing valves", "Mischventile", "Mengkleppen", "Blandningsventiler")

// thermostat ww
MAKE_PSTR_LIST(wwMode, "wwmode", "mode", "Modus", "Modus", "Läge")
MAKE_PSTR_LIST(wwSetTempLow, "wwsettemplow", "set low temperature", "untere Solltemperatur", "Onderste streeftemperatuur", "Nedre Börvärde")
MAKE_PSTR_LIST(wwWhenModeOff, "wwwhenmodeoff", "when thermostat mode off", "bei Thermostatmodus AUS", "Als Thermostaat op UIT", "när Termostatläge är AV")
MAKE_PSTR_LIST(wwExtra1, "wwextra1", "circuit 1 extra", "Kreis 1 Extra", "Circuit 1 extra", "Krets 1 Extra")
MAKE_PSTR_LIST(wwExtra2, "wwextra2", "circuit 2 extra", "Kreis 2 Extra", "Circuit 2 extra", "Kets 2 Extra")

MAKE_PSTR_LIST(wwCharge, "wwcharge", "charge", "Laden", "Laden", "Ladda")
MAKE_PSTR_LIST(wwChargeDuration, "wwchargeduration", "charge duration", "Ladedauer", "Laadtijd", "Laddtid")
MAKE_PSTR_LIST(wwDisinfect, "wwdisinfect", "disinfection", "Desinfektion", "Desinfectie", "Desinfektion")
MAKE_PSTR_LIST(wwDisinfectDay, "wwdisinfectday", "disinfection day", "Desinfektionstag", "Desinfectiedag", "Desinfektionsdag")
MAKE_PSTR_LIST(wwDisinfectHour, "wwdisinfecthour", "disinfection hour", "Desinfektionsstunde", "Desinfectieuur", "Desinfektionstimme")
MAKE_PSTR_LIST(wwDisinfectTime, "wwdisinfecttime", "disinfection time", "Desinfektionszeit", "Desinfectietijd", "Desinfektionstid")
MAKE_PSTR_LIST(wwDailyHeating, "wwdailyheating", "daily heating", "täglich Heizen", "Dagelijks opwarmen", "Daglig Uppvärmning")
MAKE_PSTR_LIST(wwDailyHeatTime, "wwdailyheattime", "daily heating time", "tägliche Heizzeit", "Tijd dagelijkse opwarming", "Daglig Uppvärmningstid")

// thermostat hc
MAKE_PSTR_LIST(selRoomTemp, "seltemp", "selected room temperature", "Sollwert Raumtemperatur", "Streeftemperatuur kamer", "Vald Rumstemperatur")
MAKE_PSTR_LIST(roomTemp, "currtemp", "current room temperature", "aktuelle Raumtemperatur", "Huidige kamertemperatuur", "Aktuell Rumstemperatur")
MAKE_PSTR_LIST(mode, "mode", "mode", "Modus", "Modus", "Läge")
MAKE_PSTR_LIST(modetype, "modetype", "mode type", "Modus Typ", "Type modus", "Typ av läge")
MAKE_PSTR_LIST(fastheatup, "fastheatup", "fast heatup", "schnelles Aufheizen", "Snel opwarmen", "Snabb Uppvärmning")
MAKE_PSTR_LIST(daytemp, "daytemp", "day temperature", "Tagestemperatur", "temperatuur dag", "Dagstemperatur")
MAKE_PSTR_LIST(daylowtemp, "daytemp2", "day temperature T2", "Tagestemperatur T2", "Temperatuur dag T2", "Dagstemperatur T2")
MAKE_PSTR_LIST(daymidtemp, "daytemp3", "day temperature T3", "Tagestemperatur T3", "Temperatuur dag T3", "Dagstemperatur T3")
MAKE_PSTR_LIST(dayhightemp, "daytemp4", "day temperature T4", "Tagestemperatur T4", "Temperatuur dag T4", "Dagstemperatur T4")
MAKE_PSTR_LIST(heattemp, "heattemp", "heat temperature", "Heizen Temperatur", "Temperatuur verwarming", "Temperatur Uppvärmning")
MAKE_PSTR_LIST(nighttemp, "nighttemp", "night temperature", "Nachttemperatur", "Nachttemperatuur", "Nattemperatur")
MAKE_PSTR_LIST(nighttemp2, "nighttemp", "night temperature T1", "Nachttemperatur T1", "Nachttemperatuur T1", "Nattemperatur T1")
MAKE_PSTR_LIST(ecotemp, "ecotemp", "eco temperature", "eco Temperatur", "Temperatuur eco", "Eko-temperatur")
MAKE_PSTR_LIST(manualtemp, "manualtemp", "manual temperature", "manuelle Temperatur", "temperatuur handmatig", "Temperatur Manuell")
MAKE_PSTR_LIST(tempautotemp,
               "tempautotemp",
               "temporary set temperature automode",
               "temporäre Solltemperatur",
               "Streeftemperatuur automodus tijdelijk",
               "Temporär Aktivering av Auto-läge")
MAKE_PSTR_LIST(remoteseltemp,
               "remoteseltemp",
               "temporary set temperature from remote",
               "temporäre Solltemperatur Remote",
               "Temperatuur van afstandsbedieding",
               "Temperatur från fjärruppkoppling")
MAKE_PSTR_LIST(comforttemp, "comforttemp", "comfort temperature", "Komforttemperatur", "Comforttemperatuur", "Komforttemperatur")
MAKE_PSTR_LIST(summertemp, "summertemp", "summer temperature", "Sommertemperatur", "Zomertemperatuur", "Sommartemperatur")
MAKE_PSTR_LIST(designtemp, "designtemp", "design temperature", "Auslegungstemperatur", "Ontwerptemperatuur", "Design-temperatur")
MAKE_PSTR_LIST(offsettemp, "offsettemp", "offset temperature", "Temperaturanhebung", "Temperatuur offset", "Temperaturkorrigering")
MAKE_PSTR_LIST(minflowtemp, "minflowtemp", "min flow temperature", "min Vorlauftemperatur", "", "Min Flödestemperatur")
MAKE_PSTR_LIST(maxflowtemp, "maxflowtemp", "max flow temperature", "max Vorlauftemperatur", "", "Max Flödestemperatur")
MAKE_PSTR_LIST(roominfluence, "roominfluence", "room influence", "Raumeinfluss", "Ruimteinvloed", "Rumspåverkan")
MAKE_PSTR_LIST(roominfl_factor, "roominflfactor", "room influence factor", "Raumeinfluss Factor", "Factor ruimteinvloed", "Rumspåverkansfaktor")
MAKE_PSTR_LIST(curroominfl, "curroominfl", "current room influence", "aktueller Raumeinfluss", "Huidige ruimteinvloed", "Aktuell Rumspåverkan")
MAKE_PSTR_LIST(nofrosttemp, "nofrosttemp", "nofrost temperature", "Frostschutztemperatur", "Temperatuur vorstbeveiliging", "Temperatur Frostskydd")
MAKE_PSTR_LIST(targetflowtemp, "targetflowtemp", "target flow temperature", "berechnete Vorlauftemperatur", "Berekende aanvoertemperatuur", "Målvärde Flödestemperatur")
MAKE_PSTR_LIST(heatingtype, "heatingtype", "heating type", "Heizungstyp", "Verwarmingstype", "Uppvärmningstyp")
MAKE_PSTR_LIST(summersetmode, "summersetmode", "set summer mode", "Einstellung Sommerbetrieb", "Instelling zomerbedrijf", "Aktivera Sommarläge")
MAKE_PSTR_LIST(hpoperatingmode, "hpoperatingmode", "heatpump operating mode", "Wärmepumpe Betriebsmodus", "Bedrijfsmodus warmtepomp", "Värmepump Driftläge")
MAKE_PSTR_LIST(hpoperatingstate, "hpoperatingstate", "heatpump operating state", "WP Arbeitsweise", "Huidige modus warmtepomp", "Värmepump Driftstatus")
MAKE_PSTR_LIST(controlmode, "controlmode", "control mode", "Kontrollmodus", "Comtrolemodus", "Kontrolläge")
MAKE_PSTR_LIST(control, "control", "control device", "Fernsteuerung", "Afstandsbedieding", "Kontrollenhet")
MAKE_PSTR_LIST(program, "program", "program", "Programm", "Programma", "Program")
MAKE_PSTR_LIST(pause, "pause", "pause time", "Pausenzeit", "Pausetijd", "Paustid")
MAKE_PSTR_LIST(party, "party", "party time", "Partyzeit", "Partytijd", "Partytid")
MAKE_PSTR_LIST(holidaytemp, "holidaytemp", "holiday temperature", "Urlaubstemperatur", "Vakantietemperatuur", "Helgtemperatur")
MAKE_PSTR_LIST(summermode, "summermode", "summer mode", "Sommerbetrieb", "Zomerbedrijf", "Sommarläge")
MAKE_PSTR_LIST(holidaymode, "holidaymode", "holiday mode", "Urlaubsbetrieb", "Vakantiebedrijf", "Helgläge")
MAKE_PSTR_LIST(flowtempoffset,
               "flowtempoffset",
               "flow temperature offset for mixer",
               "Vorlauftemperaturanhebung",
               "Mixer aanvoertemperatuur offset",
               "Temperaturkorrigering Flödestemp. Blandningsventil")
MAKE_PSTR_LIST(reducemode, "reducemode", "reduce mode", "Absenkmodus", "Gereduceerde modus", "Reducerat Läge")
MAKE_PSTR_LIST(noreducetemp, "noreducetemp", "no reduce below temperature", "Durchheizen unter", "Reduceermodus onderbreken onder", "Inaktivera reducering under")
MAKE_PSTR_LIST(reducetemp, "reducetemp", "off/reduce switch temperature", "Absenkmodus unter", "Onderste afschakeltemperatuur", "Avslag/Reducera under")
MAKE_PSTR_LIST(vacreducetemp,
               "vacreducetemp",
               "vacations off/reduce switch temperature",
               "Urlaub Absenkmodus unter",
               "Vakantiemodus onderste afschakeltemperatuur",
               "Helg Avslag/Reducering under")
MAKE_PSTR_LIST(vacreducemode, "vacreducemode", "vacations reduce mode", "Urlaub Absenkmodus", "Vakantie afschakelmodus", "Helg reduceringsläge")
MAKE_PSTR_LIST(nofrostmode, "nofrostmode", "nofrost mode", "Frostschutz Modus", "Vorstbeveiligingsmodus", "Frostskyddsläge")
MAKE_PSTR_LIST(remotetemp, "remotetemp", "room temperature from remote", "Raumtemperatur Remote", "Ruimtetemperatuur van afstandsbediening", "Rumstemperatur från fjärr")

MAKE_PSTR_LIST(wwHolidays, "wwholidays", "holiday dates", "Feiertage", "Feestdagen", "Helgdagar")
MAKE_PSTR_LIST(wwVacations, "wwvacations", "vacation dates", "Urlaubstage", "Vakantiedagen", "Semesterdatum Varmvatten")
MAKE_PSTR_LIST(holidays, "holidays", "holiday dates", "Feiertage", "Feestdagen", "Helgdatum")
MAKE_PSTR_LIST(vacations, "vacations", "vacation dates", "Urlaubstage", "Vakantiedagen", "Semesterdatum")
MAKE_PSTR_LIST(wwprio, "wwprio", "dhw priority", "WW-Vorrang", "Prioriteit warm water", "Prioritera Varmvatten")
MAKE_PSTR_LIST(nofrostmode1, "nofrostmode1", "nofrost mode", "Frostschutz", "Vorstbeveiligingsmodus", "Frostskyddsläge")
MAKE_PSTR_LIST(reducehours, "reducehours", "duration for nighttemp", "Dauer Nachttemp.", "Duur nachtverlaging", "Timmar Nattsänkning")
MAKE_PSTR_LIST(reduceminutes, "reduceminutes", "remaining time for nightmode", "Restzeit Nachttemp.", "Resterende tijd nachtverlaging", "Återstående Tid Nattläge")
MAKE_PSTR_LIST(switchonoptimization, "switchonoptimization", "switch-on optimization", "Einschaltoptimierung", "Inschakeloptimalisering", "Växlingsoptimering")

// heatpump
MAKE_PSTR_LIST(airHumidity, "airhumidity", "relative air humidity", "relative Luftfeuchte", "Relatieve luchtvochtigheid", "Relativ Luftfuktighet")
MAKE_PSTR_LIST(dewTemperature, "dewtemperature", "dew point temperature", "Taupunkttemperatur", "Dauwpunttemperatuur", "Daggpunkt")

// mixer
MAKE_PSTR_LIST(flowSetTemp, "flowsettemp", "setpoint flow temperature", "Sollwert Vorlauftemperatur", "Streefwaarde aanvoertemperatuur", "Vald flödestemperatur")
MAKE_PSTR_LIST(flowTempHc, "flowtemphc", "flow temperature (TC1)", "Vorlauftemperatur HK (TC1)", "Aanvoertemperatuut circuit (TC1)", "Flödestemperatur (TC1)")
MAKE_PSTR_LIST(pumpStatus, "pumpstatus", "pump status (PC1)", "Pumpenstatus HK (PC1)", "pompstatus circuit (PC1)", "Pumpstatus (PC1)")
MAKE_PSTR_LIST(mixerStatus, "valvestatus", "mixing valve actuator (VC1)", "Mischerventil Position (VC1)", "positie mixerklep (VC1)", "Shuntventil Status (VC1)")
MAKE_PSTR_LIST(flowTempVf,
               "flowtempvf",
               "flow temperature in header (T0/Vf)",
               "Vorlauftemperatur am Verteiler (T0/Vf)",
               "aanvoertemperatuur verdeler (T0/Vf)",
               "Flödestemperatur Fördelare (T0/Vf)")
MAKE_PSTR_LIST(mixerSetTime, "valvesettime", "time to set valve", "Zeit zum Einstellen des Ventils", "Inschakeltijd mengklep", "Inställningstid Ventil")
// mixer prefixed with wwc
MAKE_PSTR_LIST(wwPumpStatus,
               "pumpstatus",
               "pump status in assigned wwc (PC1)",
               "Pumpenstatus des wwk (PC1)",
               "Pompstatus in WW circuit (PC1)",
               "Pumpstatus i VV-krets (PC1)")
MAKE_PSTR_LIST(wwTempStatus,
               "wwtempstatus",
               "temperature switch in assigned wwc (MC1)",
               "Temperaturschalter des wwk (MC1)",
               "Temperatuurschakeling in WW circuit (MC1)",
               "Temperaturventil i VV-krets (MC1)")
MAKE_PSTR_LIST(wwTemp, "wwtemp", "current temperature", "aktuelle Temperatur", "huidige temperatuur", "Aktuell Temperatur")
// mixer pool
MAKE_PSTR_LIST(poolSetTemp, "poolsettemp", "pool set temperature", "Pool Solltemperatur", "Streeftemperatuur zwembad", "Pool Temperatur Börvärde")
MAKE_PSTR_LIST(poolTemp, "pooltemp", "pool temperature", "Pool Temperatur", "Zwembadtemperatuur", "Pooltemperatur")
MAKE_PSTR_LIST(poolShuntStatus,
               "poolshuntstatus",
               "pool shunt status opening/closing",
               "Pool Ventil öffnen/schließen",
               "Zwembadklep status openen/sluiten",
               "Pool Shunt-status öppnen/stängd")
MAKE_PSTR_LIST(poolShunt, "poolshunt", "pool shunt open/close (0% = pool / 100% = heat)", "Pool Ventil Öffnung", "Mengklep zwembad stand", "Pool Shunt Öppen/Stängd")
MAKE_PSTR_LIST(hydrTemp, "hydrTemp", "hydraulic header temperature", "Verteilertemperatur", "Temperatuur open verdeler", "Fördelartemperatur")

// solar
MAKE_PSTR_LIST(cylMiddleTemp,
               "cylmiddletemp",
               "cylinder middle temperature (TS3)",
               "Speichertemperatur Mitte (TS3)",
               "Zonneboilertemperatuur midden (TS3)",
               "Cylindertemperatur Mitten (TS3)")
MAKE_PSTR_LIST(retHeatAssist,
               "retheatassist",
               "return temperature heat assistance (TS4)",
               "Rücklaufanhebungs-Temp. (TS4)",
               "Retourtemperatuur verwarmingsassistentie (TS4)",
               "Returtemperatur värmestöd (TS4)")
MAKE_PSTR_LIST(m1Valve,
               "heatassistvalve",
               "heat assistance valve (M1)",
               "Ventil Heizungsunterstützung (M1)",
               "Klep verwarmingsassistentie (M1)",
               "Uppvärmningsstöd Ventil (M1)")
MAKE_PSTR_LIST(m1Power,
               "heatassistpower",
               "heat assistance valve power (M1)",
               "Ventilleistung Heizungsunterstützung (M1)",
               "Vermogen klep verwarmingsassistentie (M1)",
               "Uppvärmningsstöd Ventil Effekt (M1)")
MAKE_PSTR_LIST(pumpMinMod, "pumpminmod", "minimum pump modulation", "minimale Pumpenmodulation", "Minimale pompmodulatie", "Min Pumpmodulering")
MAKE_PSTR_LIST(maxFlow, "maxflow", "maximum solar flow", "maximaler Durchfluss", "Maximale doorstroom solar", "Max Flöde Solpanel")
MAKE_PSTR_LIST(solarPower, "solarpower", "actual solar power", "aktuelle Solarleistung", "Huidig solar vermogen", "Aktuellt Sol-effekt")
MAKE_PSTR_LIST(solarPumpTurnonDiff, "turnondiff", "pump turn on difference", "Einschalthysterese Pumpe", "Inschakelhysterese pomp", "Aktiveringshysteres Pump")
MAKE_PSTR_LIST(solarPumpTurnoffDiff, "turnoffdiff", "pump turn off difference", "Ausschalthysterese Pumpe", "Uitschakelhysterese pomp", "Avslagshysteres Pump")
MAKE_PSTR_LIST(pump2MinMod, "pump2minmod", "minimum pump 2 modulation", "minimale Modulation Pumpe 2", "Minimale modulatie pomp 2", "Min Modulering Pump 2")
MAKE_PSTR_LIST(solarPump2TurnonDiff, "turnondiff2", "pump 2 turn on difference", "Einschalthysterese Pumpe 2", "Inschakelhysterese pomp 2", "Aktiveringshysteres Pump 2")
MAKE_PSTR_LIST(solarPump2TurnoffDiff, "turnoffdiff2", "pump 2 turn off difference", "Ausschalthysterese Pumpe 2", "Uitschakelhysterese pomp 2", "Avslagshysteres Pump 2")

MAKE_PSTR_LIST(collectorTemp, "collectortemp", "collector temperature (TS1)", "Kollektortemperatur (TS1)", "Collectortemperatuur (TS1)", "Kollektor Temperatur (TS1)")
MAKE_PSTR_LIST(collector2Temp,
               "collector2temp",
               "collector 2 temperature (TS7)",
               "Kollector 2 Temperatur (TS7)",
               "Collector 2 temperatuur (TS7)",
               "Kollektor 2 Temperatur (TS7)")
MAKE_PSTR_LIST(cylBottomTemp,
               "cylbottomtemp",
               "cylinder bottom temperature (TS2)",
               "Speicher Bodentemperatur (TS2)",
               "Bodemtemperatuur zonneboiler (TS2)",
               "Cylindertemperatur Botten (TS2)")
MAKE_PSTR_LIST(cyl2BottomTemp,
               "cyl2bottomtemp",
               "second cylinder bottom temperature (TS5)",
               "2. Speicher Bodentemperatur (TS5)",
               "Bodemtemperatuur 2e boiler",
               "Sekundär Cylindertemperatur Botten (TS5)")
MAKE_PSTR_LIST(heatExchangerTemp,
               "heatexchangertemp",
               "heat exchanger temperature (TS6)",
               "wärmetauscher Temperatur (TS6)",
               "Temperatuur warmtewisselaar (TS6)",
               "Värmeväxlare Temperatur (TS6)")
MAKE_PSTR_LIST(collectorMaxTemp,
               "collectormaxtemp",
               "maximum collector temperature",
               "maximale Kollektortemperatur",
               "Maximale collectortemperatuur",
               "Max Kollektortemperatur")
MAKE_PSTR_LIST(collectorMinTemp,
               "collectormintemp",
               "minimum collector temperature",
               "minimale Kollektortemperatur",
               "Minimale collectortemperatuur",
               "Min Kollektortemperatur")
MAKE_PSTR_LIST(cylMaxTemp, "cylmaxtemp", "maximum cylinder temperature", "maximale Speichertemperatur", "maximale temperatuur zonneboiler", "Max Cylindertemperatur")
MAKE_PSTR_LIST(solarPumpMod, "solarpumpmod", "pump modulation (PS1)", "Pumpenmodulation (PS1)", "Pompmodulatie (PS1)", "Pumpmodulering (PS1)")
MAKE_PSTR_LIST(cylPumpMod,
               "cylpumpmod",
               "cylinder pump modulation (PS5)",
               "Speicherpumpenmodulation (PS5)",
               "Modulatie zonneboilerpomp (PS5)",
               "Cylinderpumpmodulering (PS5)")
MAKE_PSTR_LIST(solarPump, "solarpump", "pump (PS1)", "Pumpe (PS1)", "Pomp (PS1)", "Pump (PS1)")
MAKE_PSTR_LIST(solarPump2, "solarpump2", "pump 2 (PS4)", "Pumpe 2 (PS4)", "Pomp 2 (PS4)", "Pump 2 (PS4)")
MAKE_PSTR_LIST(solarPump2Mod, "solarpump2mod", "pump 2 modulation (PS4)", "Pumpe 2 Modulation (PS4)", "Modulatie pomp 2 (PS4)", "Pump 2 Modulering (PS4)")
MAKE_PSTR_LIST(valveStatus, "valvestatus", "valve status", "Ventilstatus", "Klepstatus", "Ventilstatus")
MAKE_PSTR_LIST(cylHeated, "cylheated", "cyl heated", "Speichertemperatur erreicht", "Boilertemperatuur behaald", "Värmepanna Uppvärmd")
MAKE_PSTR_LIST(collectorShutdown, "collectorshutdown", "collector shutdown", "Kollektorabschaltung", "Collector afschakeling", "Kollektor Avstängning")
MAKE_PSTR_LIST(pumpWorkTime, "pumpworktime", "pump working time", "Pumpenlaufzeit", "Pomplooptijd", "Pump Drifttid")
MAKE_PSTR_LIST(pump2WorkTime, "pump2worktime", "pump 2 working time", "Pumpe 2 Laufzeit", "Looptijd pomp 2", "Pump 2 Drifttid")
MAKE_PSTR_LIST(m1WorkTime,
               "m1worktime",
               "differential control working time",
               "Differenzregelung Arbeitszeit",
               "Verschilregeling arbeidstijd",
               "Differentialreglering Drifttid")
MAKE_PSTR_LIST(energyLastHour, "energylasthour", "energy last hour", "Energie letzte Std", "Energie laatste uur", "Energi Senaste Timmen")
MAKE_PSTR_LIST(energyTotal, "energytotal", "total energy", "Gesamtenergie", "Totale energie", "Total Energi")
MAKE_PSTR_LIST(energyToday, "energytoday", "total energy today", "Energie heute", "Energie vandaag", "Total Energi Idag")

// solar ww
MAKE_PSTR_LIST(wwTemp1, "wwtemp1", "temperature 1", "Temperatur 1", "Temperatuur 1", "Temperatur 1")
MAKE_PSTR_LIST(wwTemp3, "wwtemp3", "temperature 3", "Temperatur 3", "Temperatuur 2", "Temperatur 2")
MAKE_PSTR_LIST(wwTemp4, "wwtemp4", "temperature 4", "Temperatur 4", "Temperatuur 3", "Temperatur 3")
MAKE_PSTR_LIST(wwTemp5, "wwtemp5", "temperature 5", "Temperatur 5", "Temperatuur 5", "Temperatur 4")
MAKE_PSTR_LIST(wwTemp7, "wwtemp7", "temperature 7", "Temperatur 7", "Temperatuur 7", "Temperatur 5")
MAKE_PSTR_LIST(wwPump, "wwpump", "pump", "Pumpe", "Pomp", "Pump")
// solar ww and mixer wwc
MAKE_PSTR_LIST(wwMinTemp, "wwmintemp", "minimum temperature", "minimale Temperatur", "Minimale temperatuur", "Min Temperatur")
MAKE_PSTR_LIST(wwRedTemp, "wwredtemp", "reduced temperature", "reduzierte Temperatur", "Gereduceerde temperatuur", "Reducerad Temperatur")
MAKE_PSTR_LIST(wwDailyTemp, "wwdailytemp", "daily temperature", "tägl. Temperatur", "Dagelijkse temperatuur", "Daglig temperatur")
MAKE_PSTR_LIST(wwKeepWarm, "wwkeepwarm", "keep warm", "Warmhalten", "Warm houde", "Varmhållning")
MAKE_PSTR_LIST(wwStatus2, "wwstatus2", "status 2", "Status 2", "Status 2", "Status 2")
MAKE_PSTR_LIST(wwPumpMod, "wwpumpmod", "pump modulation", "Pumpen Modulation", "Pompmodulatie", "Pumpmodulering")
MAKE_PSTR_LIST(wwFlow, "wwflow", "flow rate", "Volumenstrom", "Doorstroomsnelheid", "Flöde")
// extra mixer ww
MAKE_PSTR_LIST(wwRequiredTemp, "wwrequiredtemp", "required temperature", "benötigte Temperatur", "Benodigde temperatuur", "Nödvändig Temperatur")
MAKE_PSTR_LIST(wwDiffTemp,
               "wwdifftemp",
               "start differential temperature",
               "Start Differential Temperatur",
               "Start differentiele temperatuur",
               "Start Differentialtemperatur")

// SM100
MAKE_PSTR_LIST(heatTransferSystem, "heattransfersystem", "heattransfer system", "Wärmeübertragungs-System", "Warmteoverdrachtssysteem", "Värmeöverföringssystem")
MAKE_PSTR_LIST(externalCyl, "externalcyl", "external cylinder", "Externer Speicher", "Externe boiler", "Extern Cylinder")
MAKE_PSTR_LIST(thermalDisinfect, "thermaldisinfect", "thermal disinfection", "Thermische Desinfektion", "Thermische desinfectie", "Termisk Desinfektion")
MAKE_PSTR_LIST(heatMetering, "heatmetering", "heatmetering", "Wärmemessung", "warmtemeting", "Värmemätning")
MAKE_PSTR_LIST(solarIsEnabled, "solarenabled", "solarmodule enabled", "Solarmodul aktiviert", "Solarmodule geactiveerd", "Solmodul Aktiverad")

// telegram 0x035A
MAKE_PSTR_LIST(solarPumpMode, "solarpumpmode", "pump mode", "Solar Pumpen Einst.", "Modus zonneboilerpomp", "Sol Pumpläge")
MAKE_PSTR_LIST(solarPumpKick, "pumpkick", "pump kick", "Röhrenkollektorfunktion", "Modus buizencollector", "Sol Kollektorfunktion")
MAKE_PSTR_LIST(plainWaterMode, "plainwatermode", "plain water mode", "Südeuropafunktion", "Modus Zuid-Europa", "Sydeuropa-funktion")
MAKE_PSTR_LIST(doubleMatchFlow, "doublematchflow", "doublematchflow", "Double Match Flow", "Double Match Flow", "Dubbelmatchning Flöde")
MAKE_PSTR_LIST(solarPump2Mode, "pump2mode", "pump 2 mode", "Pumpe 2 Modus", "Modus pomp 2", "Pump 2 Läge")
MAKE_PSTR_LIST(solarPump2Kick, "pump2kick", "pump kick 2", "Pumpe 2 Startboost", "Startboost pomp 2", "Pump 2 Kollektorfunktion")

// telegram 0x035F
MAKE_PSTR_LIST(cylPriority, "cylpriority", "cylinder priority", "Speicher Priorität", "Prioriteit boiler", "Cylinderprioritering")

// telegram 0x380
MAKE_PSTR_LIST(climateZone, "climatezone", "climate zone", "Klimazone", "klimaatzone", "Klimatzon")
MAKE_PSTR_LIST(collector1Area, "collector1area", "collector 1 area", "Kollektor 1 Fläche", "oppervlakte collector 1", "Kollektor 1 Area")
MAKE_PSTR_LIST(collector1Type, "collector1type", "collector 1 type", "Kollektor 1 Typ", "Type collector 1", "Kollektor 1 Typ")
MAKE_PSTR_LIST(collector2Area, "collector2area", "collector 2 area", "Kollektor 2 Fläche", "Oppervlakte collector 2", "Kollektor 2 Area")
MAKE_PSTR_LIST(collector2Type, "collector2type", "collector 2 type", "Kollektor 2 Typ", "Type collector 2", "Kollektor 2 Typ")

// telegram 0x0363 heatCounter
MAKE_PSTR_LIST(heatCntFlowTemp,
               "heatcntflowtemp",
               "heat counter flow temperature",
               "Wärmezähler Vorlauf-Temperatur",
               "Aanvoertemperatuur warmteenergiemeter",
               "Värmeräknare Flödestemperatur")
MAKE_PSTR_LIST(heatCntRetTemp,
               "heatcntrettemp",
               "heat counter return temperature",
               "Wärmezähler Rücklauf-Temperatur",
               "Retourtemperatuur warmteenergiemeter",
               "Värmeräknare Returtemperatur")
MAKE_PSTR_LIST(heatCnt, "heatcnt", "heat counter impulses", "Wärmezähler Impulse", "Warmteenergiemeter pulsen", "Värmeräknare Impuls")
MAKE_PSTR_LIST(swapFlowTemp,
               "swapflowtemp",
               "swap flow temperature (TS14)",
               "Austausch Vorlauf-Temperatur (TS14)",
               "Aanvoertemperatuur verwisselaar (TS14)",
               "Växlingstemperatur Flöde (TS14)")
MAKE_PSTR_LIST(swapRetTemp,
               "swaprettemp",
               "swap return temperature (TS15)",
               "Austausch Rücklauf-Temperatur (TS15)",
               "Retourtemperatuur verwisselaar (TS15)",
               "Växlingstemperatur Returflöde (TS15)")

// switch
MAKE_PSTR_LIST(activated, "activated", "activated", "Aktiviert", "Geactiveerd", "Aktiverad")
MAKE_PSTR_LIST(status, "status", "status", "Status", "Status", "Status")

// RF sensor, id 0x40, telegram 0x435
MAKE_PSTR_LIST(RFTemp, "rftemp", "RF room temperature sensor", "RF Raumtemperatur Sensor", "RF ruimtetemperatuur sensor", "RF Rumsgivare Temp")

/*
// unknown fields to track (SM10), only for testing
// **** NO TRANSLATION NEEDED ****
MAKE_PSTR_LIST(data11, "data11", "unknown datafield 11")
MAKE_PSTR_LIST(data12, "data12", "unknown datafield 12")
MAKE_PSTR_LIST(data8, "data8", "unknown datafield 8")
MAKE_PSTR_LIST(data0, "data0", "unknown datafield 0")
MAKE_PSTR_LIST(data1, "data1", "unknown datafield 1")
MAKE_PSTR_LIST(setting3, "setting3", "unknown setting 3")
MAKE_PSTR_LIST(setting4, "setting4", "unknown setting 4")
*/
