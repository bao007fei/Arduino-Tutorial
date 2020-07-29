int redLED = 8;
int dit = 100;
int dah = 500;

void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
  // S
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  // O
  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);

  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);

  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);

  // S
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  delay(1000);
}
