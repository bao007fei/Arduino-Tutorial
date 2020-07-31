int redLED = 0;
int greenLED = 1;
int blueLED = 2;

int fast = 50;
int slow = 150;
int realSlow = 200;

int longW = 1000;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop()
{
  // Red LED blink 5 times fast
  for (size_t i = 0; i < 5; i++)
  {
    digitalWrite(redLED, HIGH);
    delay(fast);
    digitalWrite(redLED, LOW);
    delay(fast);
  }

  // Green LED blink 10 times slow
  for (size_t i = 0; i < 10; i++)
  {
    digitalWrite(greenLED, HIGH);
    delay(slow);
    digitalWrite(greenLED, LOW);
    delay(slow);
  }

  // Blue LED blink 15 times real slow
  for (size_t i = 0; i < 15; i++)
  {
    digitalWrite(blueLED, HIGH);
    delay(realSlow);
    digitalWrite(blueLED, LOW);
    delay(realSlow);
  }

  delay(longW);
}
