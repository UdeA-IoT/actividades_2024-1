#include <Arduino.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "WiFi.h"
#include "mqtt_config.h"
#include "io.h"
#include "connections.h"

// ------------------------------- mqtt ------------------------------- 

WiFiClient espClient;
PubSubClient client(espClient); // Setup MQTT client

// Declaracion de funciones
void createMQTTClient(); 
void reconnectMQTTClient();

// --------------------------------------------------------------------

float distance = 0;               //stores the distance measured by the distance sensor
int cnt_50ms = 0;                 // Contador que se incrementa cada 50ms
int cnt_500ms = 0;                 // Contador de 500 ms

int publish_message = 0;          // Bandera que publica
int print_serial = 0;             // Bandera para imprimir el valor del sensor


void setup() {
  // Init Serial port
  int serial_speed = SERIAL_SPEED; // Serial Speed
  Serial.begin(serial_speed);
  setup_ports();
  setup_wifi(SSID, PASSWORD);    
  createMQTTClient(); 
}

void loop() {
  reconnectMQTTClient();
  client.loop();
  // distance
  distance = getDistance();   
  led_color(distance);
  // Tiempos
  if (cnt_50ms >= 9) {
    // 500 ms
    publish_message = 1;
    cnt_50ms = 0;
    cnt_500ms++;
  }
  if (cnt_500ms > 1) {
    // 1 seg
    print_serial = 1;
    cnt_500ms = 0;
  } 

  // Publicacion del mensaje por MQTT
  if(publish_message == 1) {
    // A los 500 ms publica mensaje
    // Serializar JSON
    JsonDocument doc;  
    doc["distance"] = distance;   
    String telemetry;  
    serializeJson(doc, telemetry);
    Serial.print("Sending telemetry ");
    Serial.println(telemetry.c_str());
    // Publish mensaje
    client.publish(TOPIC1,telemetry.c_str());
    publish_message = 0;
  }
  // Despliegue del mensaje serial
  if(print_serial == 1) {
    // Al segundo se muestra el mensaje serial
    Serial.print("Distance: ");
    Serial.print(distance);       
    Serial.println(" cm");        
    print_serial = 0;
  }
  cnt_50ms++;
  delay(50);
}

/*--------------------------------------------------  */
void createMQTTClient() {
  client.setServer(BROKER, 1883);
  // client.setCallback(clientCallback); Si el cliente recibe mensajes
  reconnectMQTTClient();
}

void reconnectMQTTClient() {
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    if (client.connect(CLIENT_NAME)) {
      Serial.println("connected");
      // client.subscribe(Topic1...);
      // ...
    }
    else {
      Serial.print("Retying in 5 seconds - failed, rc=");
      Serial.println(client.state());
      delay(5000);
    }
  }
}

// Handle incomming messages from the broker
void clientCallback(char *topic, uint8_t *payload, unsigned int length) {
  // code...
}
