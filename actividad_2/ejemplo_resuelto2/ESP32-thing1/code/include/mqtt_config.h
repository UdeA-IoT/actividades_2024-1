#ifndef MQTT_CONFIG_H
#define MQTT_CONFIG_H

#define MAX_TOPICS 10
#define SIZE_TOPIC 200

// MQTT settings
const char *ID = "thing-001";  // Ojo debe ser unico

const char *BROKER = "test.mosquitto.org";
const char *CLIENT_NAME = "thing-001"; // Pongamoslo igual por ahora

const char *TOPIC1 = "sensors/ultrasonic";

#endif //MQTT_CONFIG_H
