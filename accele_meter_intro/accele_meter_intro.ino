#include <ESP8266WebServer-impl.h>
#include <ESP8266WebServer.h>
#include <ESP8266WebServerSecure.h>
#include <Parsing-impl.h>

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Xread;
int Xrest;

int Yread;
int Yrest;

int Zread;
int Zrest;

double Gx;
double Gy;
double Gz;

int xpin = 0;
int ypin = 1;
int zpin = 2;

int t1;

void setup()
{
Serial.begin(9600);
lcd.begin(16, 2);
digitalWrite(13,HIGH);
delay(1000);
Xrest=analogRead(xpin);
Serial.print(Xrest);
Yrest=analogRead(ypin);
Serial.print(Yrest);
Zrest=analogRead(zpin);
Serial.print(Zrest);
digitalWrite(13,LOW);
}
void loop()
{
Serial.print("Time ");
t1=millis();
Serial.println(t1*0.001);

Xread = analogRead(xpin)-Xrest;
Yread=analogRead(ypin)-Yrest;
Zread=analogRead(zpin)-Zrest;

Gx=Xread/67.584;
Gy=Yread/67.584;
Gz=Zread/67.584;

Serial.print("Acceleration X :");
Serial.print(Gx);
Serial.print("Acceleration Y :");
Serial.print(Gy);
Serial.print("Acceleration Z :");
Serial.print(Gz);
Serial.print("\n");

lcd.setCursor(0, 0);
lcd.print("gx:");
lcd.print(Gx);
lcd.setCursor(8, 0);
lcd.print("gy:");
lcd.print(Gy);
lcd.setCursor(0, 1);
lcd.print("gz:");
lcd.print(Gz);
delay(1000);
lcd.clear();
}
