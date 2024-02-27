# Control de parpadeo

## Descripción

Descripción breve de lo que hace el sistema

## Hardware

### Lista de componentes

Lista de los componentes siguiendo llenando una tabla de la siguiente forma:

|Item #|Cantidad|Descripción|Información|
|---|---|---|---|
|1|1|Grove - Rotary Angle Sensor ([link](https://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/))|Este modulo hace parte del Grove - Starter Kit v3 ([link](https://wiki.seeedstudio.com/Grove_Starter_Kit_v3/)|
|2|1|Grove - Red LED ([link](https://wiki.seeedstudio.com/Grove-Red_LED/))|Este modulo hace parte del Grove - Starter Kit v3 ([link](https://wiki.seeedstudio.com/Grove_Starter_Kit_v3/)|
|3|1|Arduino UNO||

**Archivo fritzing asociado**: [ejemplo1_delay.fzz](ejemplo1_delay.fzz) 

### Esquematico

El esquematico del circuito se muestra a continuación:

![sch_ejemplo1](ejemplo1_delay_sch.png)

### Conexiones

La conexión entre los componentes del modulo se muestra a continuación:

![sch_ejemplo1](ejemplo1_delay_bb.png)

## Software

### Codigo

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
|Tinkercad|[link](https://www.tinkercad.com/things/amRkzClXvZk-ejemplo1delay)|
|Wokwi|[link](https://wokwi.com/projects/390860047897467905)|


### Montaje real

Foto del montaje real realizado...


### Carpeta del proyecto

El proyecto se encuentra en el directorio...

