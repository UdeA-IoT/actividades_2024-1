#include "io.h"
#include <Arduino.h>


void setup_ports(void) {
  // Ultrisonic sensor
  pinMode(TRIG_PIN, OUTPUT);   
  pinMode(ECHO_PIN, INPUT);    
  //set the RGB LED pins to output
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}



//RETURNS THE DISTANCE MEASURED BY THE HC-SR04 DISTANCE SENSOR
float getDistance() {
  float echoTime;                   //variable to store the time it takes for a ping to bounce off an object
  float calculatedDistance;         //variable to store the distance calculated from the echo time

  //send out an ultrasonic pulse that's 10ms long
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  echoTime = pulseIn(ECHO_PIN, HIGH);     
                                        
  calculatedDistance = echoTime / 148.0;  

  return calculatedDistance*2.54;         // Distance in cm
}

void led_color(float distance) {
  if (distance <= 10) {                       
    //if the object is close
    //make the RGB LED red
    analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
  } 
  else if (10 < distance && distance < 20) { 
    //if the object is a medium distance
    //make the RGB LED yellow
    analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 50);
    analogWrite(BLUE_PIN, 0);
  } 
  else {                                    
    //if the object is far away
    //make the RGB LED green
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255);
    analogWrite(BLUE_PIN, 0);
  }
}