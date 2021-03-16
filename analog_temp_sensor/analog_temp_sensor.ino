#define sensorPin  A0  //flat side is on our side,left side pin is positive;right pin is gnd

void setup()
{
  Serial.begin(9600); //analog pin is used for input so there is no need for declaration of pin i setup
}

void loop()
{
  int reading = analogRead(sensorPin); //variable 'reading' stores  the value recieved from variable 'sensor pin'
  float voltage = reading * 5.0;
  voltage /= 1024.0; //this kind of syntax shows that voltage variable is reading*5.0/1024.0 not just reading*5.0
  float temperatureC = (voltage - 0.5) * 100 ;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  Serial.print(voltage); 
  Serial.print(" volts  -  ");
  Serial.print(temperatureC); 
  Serial.print(" degrees C  -  ");
  Serial.print(temperatureF); 
  Serial.println(" degrees F");//next line starts in arduino

  delay(3000); //delay of3second to next reading in serial monitor
}
