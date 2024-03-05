# Actividad 1

El proposito de esta actividad consiste en portar ejemplos resueltos para el Arduino en el ESP32.

## Ejemplo 1

La siguiente figura muestra un sistema para el control de la frecuencia de parpadeo de un led usando que usa un potenciometro como entrada de control. El esquematico se muestra a continuación.

![ejercicio1](ejercicio1.png)

El programa de control se muestra a continuación:

```c++
const int voltsInPin = A3;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int rawReading = analogRead(voltsInPin);
  int period = map(rawReading, 0, 1023, 100, 500);
  digitalWrite(ledPin, HIGH);
  delay(period);
  digitalWrite(ledPin, LOW);
  delay(period);
}
```

La implementación del ejemplo anterior se muestra en los siguientes directorios:

- Implementación en el Arduino UNO usando componentes discretos (Pendiente).
- Implementación en el Arduino UNO usando modulos ([ejemplo1_ArduinoUNO_modulos](ejemplo1_ArduinoUNO_modulos/)).
- Implementación en el ESP32 usando componentes discretos (Pendiente).
- Implementación en el ESP32 usando modulos ([ejemplo1_ESP32_modulos](ejemplo1_ESP32_modulos/)).

## Ejemplo 2

El siguiente sistema implementa un sistema que pone a sonar un buzzer a dos frecuencias diferentes dependiendo del pulsador que se haya presionado.

![Ejemplo2](ejercicio2.png)

El programa que se descarga en la placa de desarrollo se muestra a continuación:

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

## Enunciado

Implemente usando la plantilla [TEMPLATE.md](TEMPLATE.md) realice la descripción y el montaje de los ejercicios del documento **37 SENSOR KIT TUTORIAL FOR UNO V2.0** ([link](37%20SENSOR%20KIT%20TUTORIAL%20FOR%20UNO%20AND%20MEGA%20v2.0.0.19.05.22.pdf)) que le sean asignados en clase. A continuación esta la tabla de asignación:

| #   | Ejemplo                                  | Responsable                                        | Directorio con la solución                         |
| --- | ---------------------------------------- | -------------------------------------------------- | -------------------------------------------------- |
| 1   | Ejemplo 1 imlementado en Arduino UNO     | Integrante1 - Integrante2                          | [link](./ejemplo1_Arduino-UNO_componentes/)        |
| 2   | Ejemplo 1 imlementado en la ESP32        | Integrante1 - Integrante2                          | [link](./ejemplo1_ESP32_modulos/)                  |
| 3   | Lesson 4 Temperature and Humidity Module | Diego Poveda - Alejandro Yarce - Pedro Saldarriaga | [link](./Lesson4_Temperature_and_Humidity_Module/) |
| 4   | Lesson 14 Two Color LED Module (5 mm)    | Jeison Moncayo - Kieffer Paez - Jhonatan Tamayo    | [link](./Lesson14_Two_Color_LED_Module/) |
|     |                                          |                                                    |                                                    |

## Referencias

Las siguientes referencias le pueden ser de utilidad:

- https://randomnerdtutorials.com/
- https://www.luisllamas.es/
- https://sparkfun.com/
- https://www.adafruit.com/
- https://www.seeedstudio.com/
- https://www.dfrobot.com/
  - https://www.dfrobot.com/blog-964.html

<!--
* https://wokwi.com/projects/390841528998696961
* https://www.tinkercad.com/things/eEfdtHudn3N-example1tones
* https://wokwi.com/projects/390845763531763713
*

* https://makeabilitylab.github.io/physcomp/esp32/tone.html
* https://www.dfrobot.com/blog-947.html
* https://www.dfrobot.com/blog-964.html


## Ejemplo 2


https://wokwi.com/projects/390853318294103041
-->
