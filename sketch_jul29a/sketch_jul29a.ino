int bitPins[4] = {0, 1, 2, 3};

void setup()
{
  for (size_t i = 0; i < 4; i++)
  {
    pinMode(i, OUTPUT);
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
        digitalWrite(j, HIGH);
      }
      else
      {
        digitalWrite(j, LOW);
      }
    }

    delay(1000);
  }
}
