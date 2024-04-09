#ifndef CONFIG_H_   /* Include guard */
#define CONFIG_H_

#include <string>

using namespace std;

// ESP32 I/O config
#define LIGHT_PIN 5

// WiFi credentials

const char *SSID = "IoT";
//const char *PASSWORD = "1245678h";
const char *PASSWORD = "1245678h";

/*
const char *SSID = "Alberto";
const char *PASSWORD = "22181224";
*/


// MQTT settings
const string ID = "nodo_office";

const string BROKER = "192.168.43.61";                  // IP-RPi
const string CLIENT_NAME = ID + "001";

const string TOPIC = "home/office/lamp";

#endif // CONFIG_H_