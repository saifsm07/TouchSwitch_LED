int touchPin = 2;
int ledPin = 13;

int touched = 0;
int val = 0; 
int lightON = 0;

void setup()
{
  Serial.begin(9600); 
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if(touched == HIGH)
  {
    Serial.println("LIGHTS ON");
    digitalWrite(ledPin,LOW);
  }
  else
  {
    Serial.println("LIGHTS OFF");
    digitalWrite(ledPin,HIGH);
  }
  delay(100);
}