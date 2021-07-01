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

 val = digitalRead(touchPin);

 if(val == HIGH)
 {
  touched = 1-touched;
  delay(100);
 }

  lightON = val;  
  if(touched == HIGH)
  {
    Serial.println("LIGHTS OFF");
    digitalWrite(ledPin,LOW);
  }
  else
  {
    Serial.println("LIGHTS ON");
    digitalWrite(ledPin,HIGH);
  }
  delay(100);
}
