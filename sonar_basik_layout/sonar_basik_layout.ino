int e_pin = 9;
int t_pin = 10;
int buzzer_pin=2;
long time;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(t_pin,OUTPUT);
pinMode(e_pin,INPUT);
pinMode(buzzer_pin,INPUT);

Serial.begin(9600);
}

void loop() {
  digitalWrite(t_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(t_pin,LOW);
  time=pulseIn(e_pin,HIGH);
   distance =(time*0.343)/2;
    Serial.println(distance);

     if(distance<=40)
     {
      digitalWrite(buzzer_pin,HIGH);
      delay(500);
     }
   else
   { 
    digitalWrite(buzzer_pin,LOW);
    delay(500);
   }
}
