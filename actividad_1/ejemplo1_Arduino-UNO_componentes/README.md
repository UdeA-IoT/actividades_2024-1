 Control de parpadeo - Arduino 1

## Descripción

Descripción breve de lo que hace el sistema...

## Hardware

### Lista de componentes

Lista de los componentes siguiendo llenando una tabla de la siguiente forma:

|Item #|Cantidad|Descripción|Información|
|---|---|---|---|
|1|1|Potenciometro de 10k||
|2|1|Led Rojo||
|3|1|Resistencia 270||
|4|1|Arduino UNO||


**Archivo fritzing asociado**: [ejemplo1_Arduino-UNO.fzz](ejemplo1_Arduino-UNO.fzz) 

### Esquematico

El esquematico del circuito se muestra a continuación:

![sch_ejemplo1](ejemplo1_Arduino-UNO_sch.png)

### Conexiones

La conexión entre los componentes del modulo se muestra a continuación:

![sch_ejemplo1](ejemplo1_Arduino-UNO_bb.png)

## Software

### Codigo

Código implementado en la placa empleada ([main.cpp](ESP32_control-parpadeo/src/main.cpp))

```C++
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

### Simulación

Enlaces con la simulación, de ser posible:

|Plataforma|Link|
|---|---|
|Tinkercad|---|
|Wokwi|---|


### Montaje real

Foto del montaje real realizado


### Carpeta del proyecto

El proyecto se encuentra en el directorio...
