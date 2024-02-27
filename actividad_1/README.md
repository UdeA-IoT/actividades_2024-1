# Actividad 1

El proposito de esta actividad consiste en portar ejemplos resueltos para el Arduino en el ESP32.

## Ejemplo



```c++
const int sw1pin = 6;
const int sw2pin = 7;
const int soundPin = 8;

void setup() {
  pinMode(sw1pin, INPUT_PULLUP);
  pinMode(sw2pin, INPUT_PULLUP);
  pinMode(soundPin, OUTPUT);
}
void loop() {
  if (!digitalRead(sw1pin)) {
    tone(soundPin, 220);
  }
  else if (!digitalRead(sw2pin)) {
    tone(soundPin, 300);
  }
  else {
    noTone(soundPin);
  }
}
```



```c++
const int sw1pin = 6;
const int sw2pin = 7;
const int soundPin = 18;

void setup() {
  pinMode(sw1pin, INPUT_PULLUP);
  pinMode(sw2pin, INPUT_PULLUP);
  pinMode(soundPin, OUTPUT);
}
void loop() {
  if (!digitalRead(sw1pin)) {
    tone(soundPin, 220);
  }
  else if (!digitalRead(sw2pin)) {
    tone(soundPin, 300);
  }
  else {
    noTone(soundPin);
  }
}
```


* https://wokwi.com/projects/390841528998696961
* https://www.tinkercad.com/things/eEfdtHudn3N-example1tones


* https://makeabilitylab.github.io/physcomp/esp32/tone.html
* https://www.dfrobot.com/blog-947.html
* https://www.dfrobot.com/blog-964.html
