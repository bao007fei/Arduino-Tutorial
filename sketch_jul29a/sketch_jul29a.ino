int bitPins[4] = {0, 1, 2, 3};
<<<<<<< HEAD
<<<<<<< HEAD

int addPin = 6;
int clearPin = 7;

int counter = 0;
=======
>>>>>>> parent of f6c821f... use varibles
=======
>>>>>>> parent of f6c821f... use varibles

void setup()
{
  for (size_t i = 0; i < 4; i++)
  {
    pinMode(i, OUTPUT);
  }

  pinMode(addPin, INPUT);
  pinMode(clearPin, INPUT);
}

void loop()
{
  if (digitalRead(addPin) == LOW)
  {
    counter++;
    binaryDisplay();
    delay(200);
  }

  if (digitalRead(clearPin) == LOW)
  {
    counter = 0;
    binaryDisplay();
    delay(200);
  }
}

void binaryDisplay()
{
  for (size_t j = 0; j < 4; j++)
  {
    if (bitRead(counter, j) == 1)
    {
<<<<<<< HEAD
      digitalWrite(bitPins[j], HIGH);
    }
    else
    {
      digitalWrite(bitPins[j], LOW);
=======
      if (bitRead(i, j) == 1)
      {
        digitalWrite(j, HIGH);
      }
      else
      {
        digitalWrite(j, LOW);
      }
>>>>>>> parent of f6c821f... use varibles
    }
  }
}
