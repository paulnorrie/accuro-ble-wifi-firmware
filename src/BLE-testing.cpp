/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#line 1 "/Users/nozza/accuro-firmware/src/BLE-testing.ino"
#include "Particle.h"
#include "ble_wifi_setup_manager.h"

// This example does not require the cloud so you can run it in manual mode or
// normal cloud-connected mode
void setup();
void loop();
#line 6 "/Users/nozza/accuro-firmware/src/BLE-testing.ino"
SYSTEM_MODE(AUTOMATIC);
SYSTEM_THREAD(ENABLED);

/*SerialLogHandler logHandler(LOG_LEVEL_ALL, {
    {"app", LOG_LEVEL_ALL},
    {"app.BLEWiFiSetupManager", LOG_LEVEL_ALL},
    {"system.ctrl.ble", LOG_LEVEL_ALL},
    {"wiring.ble", LOG_LEVEL_ALL},
});*/
SerialLogHandler logHandler(LOG_LEVEL_TRACE);

BLEWiFiSetupManager wifi_manager;

void setup() {   
    wifi_manager.setup();
}

void loop() {
	wifi_manager.loop();
}