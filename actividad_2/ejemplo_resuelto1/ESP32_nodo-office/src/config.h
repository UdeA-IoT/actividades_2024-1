#ifndef CONFIG_H_   /* Include guard */
#define CONFIG_H_

#include <string>

using namespace std;

// ESP32 I/O config
#define LIGHT_PIN 5

// WiFi credentials

const char *SSID = "ssid";
const char *PASSWORD = "pass_ssid";

// MQTT settings
const string ID = "nodo_office";

const string BROKER = "BROKER-IP";                 
const string CLIENT_NAME = ID + "-" + "001";

const string TOPIC = "home/office/lamp";

#endif // CONFIG_H_