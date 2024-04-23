#ifndef CONNECTIONS_H
#define CONNECTIONS_H
#include <Arduino.h>
#include "WiFi.h"


// Serial 
#define SERIAL_SPEED 9600

// Wifi
#define PASSWORD "1245678h"            // Cambiar 
#define SSID "IoT"                     // Cambiar 

/* ----- Wifi ----- */
void setup_wifi(const char *ssid, const char *password);

#endif //CONECTIONS_H