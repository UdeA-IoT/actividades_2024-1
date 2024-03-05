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