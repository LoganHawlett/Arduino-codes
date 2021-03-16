int sright=12;
int sleft=13;
int m11=3;//lft fwd
int m12=5;//lft bcwd
int m21=6;//right fwd
int m22=9;//right bkwd

void setup() {
pinMode(sright,INPUT);
pinMode(sleft,INPUT);
pinMode(m11,OUTPUT);
pinMode(m12,OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);
Serial.begin(9600);

}

void loop() {
   int a=digitalRead(sleft);
   int b=digitalRead(sright);

   if(a==LOW && b==LOW)
   {
    analogWrite(m11,50);
    analogWrite(m12,0);
    analogWrite(m21,50);
    analogWrite(m22,0);
    Serial.println("fwd moves");
   }

   else if(a==LOW && b==HIGH)
   { 
    analogWrite(m11,30);
    analogWrite(m12,0);
    analogWrite(m21,0);
    analogWrite(m22,0);
    Serial.println("turns rght");
    }


else if(a==HIGH &&b==LOW)
   { 
     analogWrite(m11,0);
    analogWrite(m12,0);
    analogWrite(m21,30);
    analogWrite(m22,0);
    Serial.println("turns left");
    }

   else if(a==HIGH &&b==HIGH)
   {
     analogWrite(m11,50);
    analogWrite(m12,0);
    analogWrite(m21,50);
    analogWrite(m22,0);
    Serial.println(" BOT MOVES");//high=blackline
    }




}
