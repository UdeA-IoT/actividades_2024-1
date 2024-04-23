#ifndef IO_H
#define IO_H

// Sensor de ultrasonido
#define TRIG_PIN 5
#define ECHO_PIN 18

// Led RGB
#define RED_PIN 4
#define GREEN_PIN  0
#define BLUE_PIN 2

void setup_ports(void);
float getDistance(); 
void led_color(float);

#endif // IO_H