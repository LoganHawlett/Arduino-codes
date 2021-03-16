#include <IRremote.h>
 int RECV_PIN=6;
#define code1 33444015
#define code2 33478695
#define code3 33468495
#define code4 33435855
#define code5 33468495

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  irrecv.enableIRIn();
  
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  }
  
  
 
void loop() 
{
 if (irrecv.decode(&results)) 
  {
    unsigned int value = results.value;
  }
  switch(value)
  {
    case code1:
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    break;
    case code2:
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    break;
    case code3:
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    break;
    case code4:
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    break;
    case code5:
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    break;
  }
    irrecv.resume();
    }
}   
