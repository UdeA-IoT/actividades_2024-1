int redpin = 11; //select the pin for the red LED
int greenpin = 9;// select the pin for the green LED

int val;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  for(val = 255; val > 0; val--)
  {
    analogWrite(redpin, val);  //set PWM value for red
    analogWrite(greenpin, 255 - val); //set PWM value for green
    delay(5); 
  }
  for(val = 0; val < 255; val++)
  {
    analogWrite(redpin, val);
    analogWrite(greenpin, 255 - val);
    delay(5); 
  }
  Serial.println(DEC);
}