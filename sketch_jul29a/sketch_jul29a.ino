int bitPins[4] = {4, 5, 6, 7};

void setup()
{
  for (size_t i = 0; i < 4; i++)
  {
    pinMode(bitPins[i], OUTPUT);
  }
}

void loop()
{
  for (size_t i = 0; i < 16; i++)
  {
    Serial.println(i);

    for (size_t j = 0; j < 4; j++)
    {
      if (bitRead(i, j) == 1)
      {
        digitalWrite(bitPins[j], HIGH);
      }
      else
      {
        digitalWrite(bitPins[j], LOW);
      }
    }

    delay(1000);
  }
}
