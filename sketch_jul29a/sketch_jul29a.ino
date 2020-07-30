int bitPins[4] = {0, 1, 2, 3};

int addPin = 6;
int clearPin = 7;

int counter = 0;

void setup()
{
  for (size_t i = 0; i < 4; i++)
  {
    pinMode(bitPins[i], OUTPUT);
  }

  pinMode(addPin, INPUT);
  pinMode(clearPin, INPUT);
}

void loop()
{
  if (digitalRead(addPin) == LOW)
  {
    counter++;
  }

  if (digitalRead(clearPin) == LOW)
  {
    counter = 0;
  }

  for (size_t j = 0; j < 4; j++)
  {
    if (bitRead(counter, j) == 1)
    {
      digitalWrite(bitPins[j], HIGH);
    }
    else
    {
      digitalWrite(bitPins[j], LOW);
    }
  }

  delay(100);
}
