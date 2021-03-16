#include <Servo.h>
#define ldrpin A0
int ldrvalue=0;
int laserPin = 8;
Servo myservo; 
int pos = 0; 

void setup() 
{
  pinMode(laserPin, OUTPUT);
  Serial.begin(9600);
  myservo.attach(9);
}
void loop() {
 ldrvalue=analogRead(ldrpin);
 Serial.println(ldrvalue);//print value on serial monitor
 delay(100);//wait a little

    digitalWrite(laserPin, HIGH);
    delay(50);
    digitalWrite(laserPin, LOW);
    delay(50); 

    for (pos = 0; pos <= 180; pos += 1) 
   {                                          // goes from 0 degrees to 180 degrees
                                           // in steps of 1 degree
    myservo.write(pos);                      // tell servo to go to position in variable 'pos'
    delay(10);                              // waits 15ms for the servo to reach the position
   }
    for (pos = 180; pos >= 0; pos -= 1)
   {                                         // goes from 180 degrees to 0 degrees
    myservo.write(pos);                    // tell servo to go to position in variable 'pos'
    delay(10);                             // waits 15ms for the servo to reach the position
   }

 
}
