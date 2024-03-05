# Lesson 9 Active Buzzer Module

## Descripción

El módulo de zumbador activo emite un sonido audible cuando se le suministra energía eléctrica, lo que lo hace útil para señalización y alertas en proyectos electrónicos.

## Hardware

### Lista de componentes

Lista de los componentes siguiendo llenando una tabla de la siguiente forma:

|Item #|Cantidad|Descripción|Información|
|---|---|---|---|
|1|1|Elegoo Uno R3|Microprocesador|
|2|1|Active Buzzer Module|Módulo que emite sonido audible al recibir señal eléctrica|
|3|2|F-M wires|Cables|

### Esquematico

Imagen con el esquematico del circuito
![Lesson9_esquemático](https://github.com/juanjohiguita/actividades_2024-1/blob/main/actividad_1/Lesson%209%20Active%20Buzzer%20Module/lesson%209_bb.png)

### Conexiones

Imagen con el diagrama de conexión
![Lesson9_bb](https://github.com/juanjohiguita/actividades_2024-1/blob/main/actividad_1/Lesson%209%20Active%20Buzzer%20Module/lesson%209_esquemático.png)

## Software

### Codigo

Código implementado en la placa empleada

```C++
// codigo de la placa base...
/* the pin of the active buzzer */
int buzzer = 12;
void setup()
{
/* initialize the buzzer pin as an output */
pinMode(buzzer, OUTPUT);
}
void loop()
{
/*define a char variable i */
  unsigned char i;
  while(1)
  {
/* output an frequency */
    for(i=0;i<80;i++)
    {
    /*When the buzzer is high, it sounds*/
      digitalWrite(buzzer,HIGH);


      delay(1); //wait for 1ms
      digitalWrite(buzzer,LOW);
      delay(1); //wait for 1ms
    }
/* output another frequency */
    for(i=0;i<100;i++)
    {
      digitalWrite(buzzer,HIGH);
      delay(2); //wait for 2ms
      digitalWrite(buzzer,LOW);
      delay(2); //wait for 2ms
    }
  }
}
```

### Simulación

Enlaces con la simulación, de ser posible:

|Plataforma|Link|
|---|---|
|Tinkercad||
|Wokwi|https://wokwi.com/projects/391482827729033217|


### Montaje real

Foto del montaje real realizado
