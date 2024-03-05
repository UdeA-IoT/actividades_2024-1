# Modulo de Temperatura y Humedad

## Descripción

El sensor DHT11 es un sensor digital de temperatura y humedad que ofrece una salida de señal digital calibrada de la temperatura y la humedad. Utiliza tecnología avanzada para la recolección de módulos digitales y tecnología de detección de temperatura y humedad, asegurando alta fiabilidad y estabilidad a largo plazo. Este sensor combina componentes para la detección de humedad basados en resistencia y dispositivos de medición de temperatura NTC, conectados a un microcontrolador de 8 bits de alto rendimiento.

## Hardware

### Lista de componentes

Lista de los componentes siguiendo llenando una tabla de la siguiente forma:

| Item # | Cantidad | Descripción    | Información |
| ------ | -------- | -------------- | ----------- |
| 1      | 1        | Arduino Uno R3 | N/A         |
| 2      | 1        | Modulo DHT11   | N/A         |
| 3      | 3        | Cables F-M     | N/A         |

### Esquematico

![Lesson4_esquemático](https://github.com/diegopovalz/actividades_2024-1/assets/57969717/a9db1164-0ce3-45da-8629-b41b3c53e082)

### Conexiones

![Lesson4_bb](https://github.com/diegopovalz/actividades_2024-1/assets/57969717/5143a92a-d1de-45bf-af33-5300d9a7bb47)

## Software

### Codigo

```C++
#include<dht_nonblocking.h>

#defineDHT_SENSOR_TYPEDHT_TYPE_11
//#defineDHT_SENSOR_TYPEDHT_TYPE_21
//#defineDHT_SENSOR_TYPEDHT_TYPE_22

static const int DHT_SENSOR_PIN = 2;
DHT_nonblocking dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE );

void setup( )
{
	Serial.begin( 9600);
}

void loop( )
{
	floattemperature;
	float humidity;

	if(dht_sensor.measure(&temperature,&humidity)){
		Serial.print( "T = " );
		Serial.print( temperature, 1 );
		Serial.print( " deg. C, H = " );
		Serial.print( humidity, 1 );
		Serial.println( "%" );
	}
}
```

### Simulación

Enlaces con la simulación, de ser posible:

| Plataforma | Link                                                  |
| ---------- | ----------------------------------------------------- |
| Tinkercad  |                                                       |
| Wokwi      | [link](https://wokwi.com/projects/391276679166924801) |
