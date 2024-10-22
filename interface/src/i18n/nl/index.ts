import type { Translation } from '../i18n-types';

const nl: Translation = {
  LANGUAGE: 'Taal',
  RETRY: 'Opnieuw proberen',
  LOADING: 'Laden',
  IS_REQUIRED: '{0} is verplicht',
  SIGN_IN: 'Inloggen',
  SIGN_OUT: 'Uitloggen',
  USERNAME: 'Gebruikersnaam',
  PASSWORD: 'Wachtwoord',
  SU_PASSWORD: 'su Wachtwoord',
  SETTINGS_OF: '{0} Instellingen',
  HELP: 'Help',
  LOGGED_IN: 'Ingelogd als {name}',
  PLEASE_SIGNIN: 'Log in om verder te gaan',
  UPLOAD_SUCCESSFUL: 'Upload successvol',
  DOWNLOAD_SUCCESSFUL: 'Download successvol',
  INVALID_LOGIN: 'Logingegevens fout',
  NETWORK: 'Netwerk',
  SECURITY: 'Beveiliging',
  ONOFF_CAP: 'AAN/UIT',
  ONOFF: 'aan/uit',
  TYPE: 'Type',
  DESCRIPTION: 'Beschrijving',
  ENTITIES: 'entiteiten',
  REFRESH: 'Ververs',
  EXPORT: 'Export',
  FAVORITES: "Favorieten", // TODO Translate
  DEVICE_DETAILS: 'Device Gegevens',
  ID_OF: '{0} ID',
  DEVICE: 'Apparaat',
  PRODUCT: 'Product',
  VERSION: 'Versie',
  BRAND: 'Merk',
  ENTITY_NAME: 'Entiteit',
  VALUE: '{{waarde|Waarde}}',
  DEVICES: 'Apparaten',
  SENSORS: 'Sensoren',
  RUN_COMMAND: 'Call commando',
  CHANGE_VALUE: 'Wijzig waarde',
  CANCEL: 'Annuleren',
  RESET: 'Reset',
  APPLY_CHANGES: 'Aanpassen ({0})',
  UPDATE: 'Update',
  EXECUTE: 'Uitvoeren',
  REMOVE: 'Verwijderen',
  PROBLEM_UPDATING: 'Probleem met updaten',
  PROBLEM_LOADING: 'Probleem met laden',
  ANALOG_SENSOR: 'Analoge sensor',
  ANALOG_SENSORS: 'Analoge Sensoren',
  SETTINGS: 'Instellingen',
  UPDATED_OF: '{0} Bijgewerkt',
  UPDATE_OF: '{0} Bijwerken',
  REMOVED_OF: '{0} Verwijderd',
  DELETION_OF: '{0} Verwijder',
  OFFSET: 'Offset',
  FACTOR: 'Factor',
  FREQ: 'Frequentie',
  DUTY_CYCLE: 'Duty Cycle',
  UNIT: 'UoM',
  STARTVALUE: 'Startwaarde',
  WARN_GPIO: 'Waarschuwing: let op met het koppelen van de juiste GPIO pin!',
  EDIT: 'Wijzigen',
  SENSOR: 'Sensor',
  TEMP_SENSOR: 'Temperatuur sensor',
  TEMP_SENSORS: 'Temperatuur Sensoren',
  WRITE_CMD_SENT: 'Schrijf commando gestuurd',
  EMS_BUS_WARNING: 'EMS bus niet gevonden. Als deze waarschuwing blijft staan na een paar seconden dan loop de instellingen na en in het bijzonder het apparaat type profiel na.',
  EMS_BUS_SCANNING: 'Scannen naar EMS apparaten...',
  CONNECTED: 'Verbonden',
  TX_ISSUES: 'Tx bus probleem. Probeer een andere Tx verzendmodus',
  DISCONNECTED: 'Niet verbonden',
  EMS_SCAN: 'Weet je zeker dat je een volledige EMS bus scan uit wilt voeren?',
  DATA_TRAFFIC: 'Data Traffic', // TODO Translate
  EMS_DEVICE: 'EMS Apparaat',
  SUCCESS: 'SUCCESS',
  FAIL: 'MISLUKT',
  QUALITY: 'QUALITEIT',
  SCAN: 'Scan',
  STATUS_NAMES: [
    'EMS Telegrammen ontvangen (Rx)',
    'EMS Leesopdrachten (Tx)',
    'EMS Schrijfopdrachten (Tx)',
    'Temperatuursensoren uitgelezen',
    'Analoge sensoren uitgelezen',
    'MQTT publicaties',
    'API calls',
    'Syslog berichten'
  ],
  NUM_DAYS: '{num} dag{{en}}',
  NUM_SECONDS: '{num} second{{en}}',
  NUM_HOURS: '{num} {{uur|uren}}',
  NUM_MINUTES: '{num} {{minuut|minuten}}',
  APPLICATION: 'Applicatie',
  CUSTOMIZATIONS: 'Aanpassingen van entiteiten',
  APPLICATION_RESTARTING: 'EMS-ESP herstarten',
  BOARD_PROFILE: 'Apparaatprofiel',
  CUSTOM: 'Custom',
  GPIO_OF: '{0} GPIO',
  BUTTON: 'Toets',
  TEMPERATURE: 'Temperatuur',
  PHY_TYPE: 'Eth PHY Type',
  TX_MODE: 'EMS Tx Mode',
  HARDWARE: 'Hardware',
  EMS_BUS: '{{BUS|EMS BUS}}',
  DISABLED: 'Uitgeschakeld',
  GENERAL_OPTIONS: 'Algemene Opties',
  LANGUAGE_ENTITIES: 'Taal (voor apparaat entiteiten)',
  HIDE_LED: 'Verberg LED',
  ENABLE_TELNET: 'Activeer Telnet console',
  ENABLE_ANALOG: 'Activeer analoge sensoren',
  CONVERT_FAHRENHEIT: 'Converteer temperatuurwaarden naar Fahrenheit',
  BYPASS_TOKEN: 'API Access Token authenticatie uitschakelen',
  READONLY: 'Activeer read-only modus (blokkeert alle outgaande EMS Tx schrijf commandos)',
  UNDERCLOCK_CPU: 'Underclock CPU snelheid',
  REMOTE_TIMEOUT: 'Remote timeout',
  REMOTE_TIMEOUT_EN: 'Disable remote on missing room temperature', // TODO translate
  HEATINGOFF: 'Start ketel met geforceerde verwarming uit',
  MIN_DURATION: 'Wait time',
  ENABLE_SHOWER_TIMER: 'Activeer Douche Timer (tijdmeting)',
  ENABLE_SHOWER_ALERT: 'Activeer Douchemelding',
  TRIGGER_TIME: 'Trigger tijd',
  COLD_SHOT_DURATION: 'Tijd Shot koud water',
  FORMATTING_OPTIONS: 'Formatteringsopties',
  BOOLEAN_FORMAT_DASHBOARD: 'Boolean formaat web',
  BOOLEAN_FORMAT_API: 'Boolean formaat API/MQTT',
  ENUM_FORMAT: 'Enum formaat API/MQTT',
  INDEX: 'Index',
  ENABLE_PARASITE: 'Activeer 1-wire parasitaire modus',
  LOGGING: 'Logging',
  LOG_HEX: 'Log EMS telegrammen in hexadecimaal',
  ENABLE_SYSLOG: 'Activeer Syslog',
  LOG_LEVEL: 'Log Level',
  MARK_INTERVAL: 'Markeringsinterval',
  SECONDS: 'seconden',
  MINUTES: 'minuten',
  HOURS: 'uren',
  RESTART: 'Herstarten',
  RESTART_TEXT: 'EMS-ESP dient opnieuw gestart te worden om de wijzingen toe te passen',
  RESTART_CONFIRM: 'Weet je zeker dat je EMS-ESP wilt herstarten?',
  COMMAND: 'Commando',
  CUSTOMIZATIONS_RESTART: 'Alle custom profielen worden verwijderd. Herstarten...',
  CUSTOMIZATIONS_FULL: 'Te veel entiteiten geselecteerd. Sla op in delen aub',
  CUSTOMIZATIONS_SAVED: 'Custom aanpassingen opgeslagen',
  CUSTOMIZATIONS_HELP_1: 'Selecteer een apparaat en pas de entiteiten aan door middel van de opties',
  CUSTOMIZATIONS_HELP_2: 'Markeer as favoriet',
  CUSTOMIZATIONS_HELP_3: 'Zet schrijfacties uit',
  CUSTOMIZATIONS_HELP_4: 'Uitsluiten van MQTT en API',
  CUSTOMIZATIONS_HELP_5: 'verbergen voor apparaten', // TODO translate
  CUSTOMIZATIONS_HELP_6: 'verwijderen van memory',
  SELECT_DEVICE: 'Selecteer een apparaat',
  SET_ALL: 'Alles aanzetten',
  OPTIONS: 'Opties',
  NAME: 'Naam',
  CUSTOMIZATIONS_RESET: 'Weet je zeker dat je alle custom aanpassingen wilt verwijderen inclusief de custom instellingen voor analoge temperatuursensoren?',
  SUPPORT_INFORMATION: 'Support Informatie',
  HELP_INFORMATION_1: 'Bezoek de online wiki om instructies te vinden om EMS-ESP te configureren',
  HELP_INFORMATION_2: 'Voor de live community ga naar de Discord server',
  HELP_INFORMATION_3: 'Om een nieuwe feature te vragen of een bug te rapporteren',
  HELP_INFORMATION_4: 'Zorg dat je ook je systeem details zijn toevoeged voor een sneller antwoord',
  HELP_INFORMATION_5: 'For help and questions please contact your installer.', // TODO translate
  UPLOAD: 'Upload',
  DOWNLOAD: '{{D|d|d}}ownload',
  INSTALL: 'Installeren {0}',
  ABORTED: 'afgebroken',
  FAILED: 'mislukt',
  SUCCESSFUL: 'successvol',
  SYSTEM: 'Systeem',
  LOG_OF: '{0} Log',
  STATUS_OF: '{0} Status',
  DOWNLOAD_UPLOAD: 'Download/Upload',
  CLOSE: 'Sluiten',
  USE: 'Gebruik',
  FACTORY_RESET: 'Fabrieksinstellingen',
  SYSTEM_FACTORY_TEXT: 'Gateway is gereset en start nu weer op met fabrieksinstellingen',
  SYSTEM_FACTORY_TEXT_DIALOG: 'Weet je zeker dat je een reset naar fabrieksinstellingen uit wilt voeren?',
  STABLE: 'Stable',
  DEVELOPMENT: 'Development',
  EMS_ESP_VER: 'Firmware Versie',
  UPTIME: 'Systeem Uptime',
  FREE_MEMORY: 'Free Memory',
  PSRAM: 'PSRAM (Size / Free)',
  FLASH: 'Flash Chip (Size , Speed)',
  APPSIZE: 'Application (Partition: Used / Free)',
  FILESYSTEM: 'File System (Used / Free)',
  BUFFER_SIZE: 'Max Buffer Size',
  COMPACT: 'Compact',
  DOWNLOAD_SETTINGS_TEXT: 'Create a backup of your configuration and settings', // TODO translate
  UPLOAD_TEXT: 'Upload a new firmware (.bin) file or a backup file (.json)', // TODO translate
  UPLOAD_DROP_TEXT: 'Sleep bestand hierheen of klik hier',
  ERROR: 'Onverwachte fout, probeer opnieuw',
  TIME_SET: 'Tijd ingesteld',
  MANAGE_USERS: 'Beheer Gebruikers',
  IS_ADMIN: 'is Admin',
  USER_WARNING: 'U dient tenminste 1 admin gebruiker te configureren',
  ADD: 'Toevoegen',
  ACCESS_TOKEN_FOR: 'Access Token voor',
  ACCESS_TOKEN_TEXT: 'Het token hieronder wordt gebruikt voor de REST API calls die authorisatie nodig hebben. Het kan zowel als Bearer token in de Authorization header of in acccess_token URL query parameter gebruikt worden',
  GENERATING_TOKEN: 'Token aan het genereren',
  USER: 'Gebruiker',
  MODIFY: 'Aanpassen',
  SU_TEXT: 'Het su (super user) wachtwoord wordt gebruikt om authorisatie tokens te signeren en ook om admin privileges te activeren in de console.',
  NOT_ENABLED: 'Niet geactiveerd',
  ERRORS_OF: '{0} Foutmeldingen',
  DISCONNECT_REASON: 'Verbinding verbroken vanwege',
  ENABLE_MQTT: 'Activeer MQTT',
  BROKER: 'Broker',
  CLIENT: 'Client',
  BASE_TOPIC: 'Base',
  OPTIONAL: 'optioneel',
  FORMATTING: 'Formatteren',
  MQTT_FORMAT: 'Topic/Payload Formattering',
  MQTT_NEST_1: 'Genest in 1 topic',
  MQTT_NEST_2: 'Als individuele topics',
  MQTT_RESPONSE: 'Publiceer commando output naar een `response` topic',
  MQTT_PUBLISH_TEXT_1: 'Publiceer enkele waarde topics on change',
  MQTT_PUBLISH_TEXT_2: 'Publiceer naar commando topics (ioBroker)',
  MQTT_PUBLISH_TEXT_3: 'Activeer MQTT Discovery',
  MQTT_PUBLISH_TEXT_4: 'Prefix voor de Discovery topics',
  MQTT_PUBLISH_TEXT_5: 'Discovery type',
  MQTT_PUBLISH_INTERVALS: 'Publicatie intervallen',
  MQTT_INT_BOILER: 'CV ketels en warmtepompen',
  MQTT_INT_THERMOSTATS: 'Thermostaten',
  MQTT_INT_SOLAR: 'Solar Modules',
  MQTT_INT_MIXER: 'Mixer Modules',
  MQTT_INT_WATER: 'Water Modules',
  MQTT_QUEUE: 'MQTT Queue',
  DEFAULT: 'Default',
  MQTT_ENTITY_FORMAT: 'Entity ID formaat',
  MQTT_ENTITY_FORMAT_0: 'Eén instantie, lange naam (v3.4)',
  MQTT_ENTITY_FORMAT_1: 'Eén instantie, korte naam',
  MQTT_ENTITY_FORMAT_2: 'Meerdere instanties, korte naam',
  MQTT_CLEAN_SESSION: 'Clean Session aan',
  MQTT_RETAIN_FLAG: 'Retain flag aan',
  INACTIVE: 'Inactief',
  ACTIVE: 'Actief',
  UNKNOWN: 'Onbekend',
  SET_TIME: 'Tijd instellen',
  SET_TIME_TEXT: 'Geef de locale datum en tijd in',
  LOCAL_TIME: 'Locale Tijd',
  UTC_TIME: 'UTC Tijd',
  ENABLE_NTP: 'Activeer NTP',
  NTP_SERVER: 'NTP Server',
  TIME_ZONE: 'Tijdzone',
  ACCESS_POINT: 'Access Point',
  AP_PROVIDE: 'Activeer Access Point',
  AP_PROVIDE_TEXT_1: 'altijd',
  AP_PROVIDE_TEXT_2: 'als WiFi niet is verbonden',
  AP_PROVIDE_TEXT_3: 'nooit',
  AP_PREFERRED_CHANNEL: 'Voorkeurskanaal',
  AP_HIDE_SSID: 'SSID verbergen',
  AP_CLIENTS: 'AP Clients',
  AP_MAX_CLIENTS: 'Max Clients',
  AP_LOCAL_IP: 'Local IP',
  NETWORK_SCAN: 'Scan WiFi Networken',
  IDLE: 'Idle',
  LOST: 'Verloren',
  SCANNING: 'Scannen',
  SCAN_AGAIN: 'Opnieuw scannen',
  NETWORK_SCANNER: 'Netwerk Scanner',
  NETWORK_NO_WIFI: 'Geen WiFi networken gevonden',
  NETWORK_BLANK_SSID: 'laat leeg om WiFi uit te schakelen',
  NETWORK_BLANK_BSSID: 'laat leeg om alleen SSID te bebruiken',
  TX_POWER: 'Tx Vermogen',
  HOSTNAME: 'Hostname',
  NETWORK_DISABLE_SLEEP: 'WiFi Sleep Mode uitzetten',
  NETWORK_LOW_BAND: 'Lagere WiFi bandbreedte gebruiken',
  NETWORK_USE_DNS: 'Activeer mDNS Service',
  NETWORK_ENABLE_CORS: 'Activeer CORS',
  NETWORK_CORS_ORIGIN: 'CORS origin',
  NETWORK_FIXED_IP: 'Gebruik vast IP addres',
  NETWORK_GATEWAY: 'Gateway',
  NETWORK_SUBNET: 'Subnetmasker',
  NETWORK_DNS: 'DNS Servers',
  ADDRESS_OF: '{0} Address',
  ADMINISTRATOR: 'Administrator', 
  GUEST: 'Gast',
  NEW: 'Nieuwe',
  NEW_NAME_OF: 'Hernoem {0}',
  ENTITY: 'Entiteit',
  MIN: 'min',
  MAX: 'max',
  BLOCK_NAVIGATE_1: 'U hebt niet-opgeslagen wijzigingen',
  BLOCK_NAVIGATE_2: 'Als u naar een andere pagina navigeert, gaan uw niet-opgeslagen wijzigingen verloren. Weet je zeker dat je deze pagina wilt verlaten?',
  STAY: 'Blijven',
  LEAVE: 'Verlaten',
  SCHEDULER: 'Scheduler',
  SCHEDULER_HELP_1: 'Automatiseer opdrachten door hieronder geplande gebeurtenissen toe te voegen. Stel een unieke naam in om activering via API/MQTT in/uit te schakelen.',
  SCHEDULER_HELP_2: 'Gebruik 00:00 om eenmaal te activeren bij het opstarten',
  SCHEDULE: 'Schedule',
  TIME: 'Tijd',
  TIMER: 'Timer',
  ONCHANGE: 'Op verandering', // TODO translate
  CONDITION: 'Voorwaarde', // TODO translate
  IMMEDIATE: 'Onmiddellijk', // TODO translate
  SCHEDULE_UPDATED: 'Schema bijgewerkt',
  SCHEDULE_TIMER_1: 'bij het opstarten',
  SCHEDULE_TIMER_2: 'elke minuut',
  SCHEDULE_TIMER_3: 'elke huur',
  CUSTOM_ENTITIES: 'Eigen entiteiten',
  ENTITIES_HELP_1: 'Eigen entiteiten ophalen uit de EMS-bus',
  ENTITIES_UPDATED: 'Entiteiten bijgewerkt',
  WRITEABLE: 'Beschrijfbare',
  SHOWING: 'Tonen',
  SEARCH: 'Zoek',
  CERT: 'TLS rootcertificaat (laat leeg om TLS-insecure)',
  ENABLE_TLS: 'Activeer TLS',
  ON: 'Aan',
  OFF: 'Uit',
  POLARITY: 'Polariteit',
  ACTIVEHIGH: 'Actiev Hoog',
  ACTIVELOW: 'Actiev Laag',
  UNCHANGED: 'Ongewijzigd',
  ALWAYS: 'Altijd',
  ACTIVITY: 'Activiteit',
  CONFIGURE: '{0} Configureren',
  SYSTEM_MEMORY: 'System Geheugen',
  APPLICATION_SETTINGS_1: 'Applicatie-instellingen wijzigen',
  SECURITY_1: 'Gebruikers toevoegen of verwijderen',
  DOWNLOAD_UPLOAD_1: 'Download en upload instellingen en firmware',
  MODULES: 'Module',
  MODULES_1: 'Externe modules activeren of deactiveren', // TODO translate
  MODULES_UPDATED: 'Modules geüpdatet', 
  MODULES_DESCRIPTION: 'Klik op de module om EMS-ESP library modules te activeren of te deactiveren',
  MODULES_NONE: 'Geen externe modules gedetecteerd',
  RENAME: 'Hernoemen',
  ENABLE_MODBUS: 'Activeer Modbus',
  VIEW_LOG: 'View log to diagnose issues', // TODO translate
  UPLOAD_DRAG: 'drag and drop a file here or click to select one', // TODO translate
  SERVICES: 'Services', // TODO translate
  ALLVALUES: 'All Values', // TODO translate
  SPECIAL_FUNCTIONS: 'Special Functions', // TODO translate
  WAIT_FIRMWARE: 'Firmware is uploading and installing', // TODO translate
  INSTALL_VERSION: 'This will install version {0}. Are you sure?', // TODO translate
  SWITCH_DEV: 'switch to the development version', // TODO translate
  UPGRADE_AVAILABLE: 'There is a firmware upgrade available!', // TODO translate
  LATEST_VERSION: 'You are using the latest firmware version.', // TODO translate
  PLEASE_WAIT: 'Please wait', // TODO translate
  RESTARTING_PRE: 'Initializing', // TODO translate
  RESTARTING_POST: 'Preparing', // TODO translate
  AUTO_SCROLL: 'Auto Scroll', // TODO translate
  DASHBOARD: 'Dashboard', // TODO translate
  NO_DATA: 'No data available', // TODO translate
  DASHBOARD_1: 'Customize your dashboard by marking EMS entities as Favorite using the Customizations module.', // TODO translate
  DEVELOPER_MODE: 'Developer Mode' // TODO translate
};

export default nl;
