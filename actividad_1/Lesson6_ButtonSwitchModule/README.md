# Módulo Botón Switch

Button Switch Module

## Descripción

Los interruptores son componentes muy sencillos. Al pulsar un botón o accionar una palanca, conectan dos
contactos para que la electricidad fluya a través de ellos.
Los pequeños interruptores táctiles que se utilizan en esta lección tienen cuatro conexiones, lo que puede resultar un poco confuso.
un poco confuso.

## Hardware

### Lista de componentes

Lista de los componentes siguiendo llenando una tabla de la siguiente forma:

|Item #|Cantidad|Descripción|Información|
|---|---|---|---|
|Elegoo Uno R3|1|Microprocesador||
|USB cable|1|Cable||
|Button modulo|1|Boton||
|F-M Wires|1|Cable||

### Esquematico

![image](https://github.com/Keco28/actividades_2024-1/assets/95240358/d59e2f29-227b-45a4-830f-f89331f8680a)


### Conexiones

![image](https://github.com/Keco28/actividades_2024-1/assets/95240358/e6e35547-c49a-4695-9795-b3c35cc3bd3f)


## Software

### Codigo

```C++
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value
  buttonState = digitalRead(2);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // turn LED off
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
```

Simulación

|Plataforma|Link|
|---|---|
|Tinkercad| [Link](https://www.tinkercad.com/things/jHFczUwpAl5-fantabulous-snaget-borwo/editel?sharecode=LwbzRV3-29FtA2J0TVSUUM-rs5Y8Tw0ZyQP3_A87m_Q)|
