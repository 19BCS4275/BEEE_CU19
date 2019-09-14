void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(125); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(125); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(125); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(125); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  delay(125); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(125); // Wait for 1000 millisecond(s)
}