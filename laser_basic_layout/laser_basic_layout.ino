int laserPin = 8;
int laserPin2 = 4;
void setup ()
{
  pinMode(laserPin, OUTPUT);
  pinMode(laserPin2, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  digitalWrite(laserPin, HIGH);
  digitalWrite(laserPin2, HIGH);
  delay(1000);

  digitalWrite(laserPin, LOW);    
  digitalWrite(laserPin2, LOW);
  delay(1000);
 
 
}
