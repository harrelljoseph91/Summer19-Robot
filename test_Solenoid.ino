const int Solenoid = 5;

void setup() 
{
  pinMode(Solenoid, OUTPUT);
}

void loop() 
{
  digitalWrite(Solenoid, HIGH);
  delay(5000);
  digitalWrite(Solenoid, LOW);
  delay(5000);
}
