  const int ledPin = 13;
  const int buzzerPin = 12;
  const int ldrPin = A0;
  const int laserPin = 8;

void setup () 
{   Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
   pinMode(buzzerPin, OUTPUT);
   pinMode(ldrPin, INPUT);
   pinMode( laserPin , OUTPUT);
   digitalWrite( laserPin , HIGH);
}

void loop() 
{    int ldrStatus = analogRead(ldrPin);
    int x=map(ldrStatus,0,1023,0,255);
    Serial.println(x);
    if (ldrStatus > 1)
    {
    tone(buzzerPin,100);
    digitalWrite(ledPin,HIGH);
    delay(100);

     noTone(buzzerPin);
     digitalWrite(ledPin, LOW);
     delay(100);
     Serial.println(" ALARM ACTIVATED ");
     }
     else 
     {
      noTone(buzzerPin);
      digitalWrite(ledPin, LOW);
      Serial.println("ALARM DEACTIVATED");
      }
      Serial.println( ldrStatus );
        //delay(10);
}
