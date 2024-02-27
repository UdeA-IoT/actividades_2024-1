
#include <Arduino.h>

const int buzzerChannel = 0;
const int resolution = 8;

const int sw1pin = 16;
const int sw2pin = 17;
const int soundPin = 14;

const int freq = 2000;

void setup() {
  pinMode(sw1pin, INPUT);
  pinMode(sw2pin, INPUT);
  // BUZZER PWM init
  ledcSetup(buzzerChannel, freq, resolution);
  // BUZZER pin init
  ledcAttachPin(soundPin, buzzerChannel); 
}

void loop() {  
  if (!digitalRead(sw1pin)) {
    ledcWrite(buzzerChannel, 125); 
    ledcWriteTone(buzzerChannel, 220);
  }  
  else if (!digitalRead(sw2pin)) {
   ledcWrite(buzzerChannel, 125); 
   ledcWriteTone(buzzerChannel, 300);
  }  
}
