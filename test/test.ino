int redLED = 9;
int bright = 1;

void setup()
{
    pinMode(redLED, OUTPUT);
}

void loop()
{

    for (size_t i = 0; i < 255; i++)
    {
        analogWrite(redLED, i);
        delay(20);
    }

    for (size_t i = 255; i > 0; i--)
    {
        analogWrite(redLED, i);
        delay(20);
    }
}
