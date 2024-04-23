#include "connections.h"

// Wifi conection
void setup_wifi(const char *ssid, const char *password) {
  Serial.print("\nConnecting to ");
  Serial.println(ssid);
  
  // Connect to network
  WiFi.begin(ssid, password); 

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) { 
    delay(500);
    Serial.print(".");
  }  
  Serial.println();
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}