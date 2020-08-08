#include <dht11.h>
#define DHT11PIN 10

dht11 DHT11;

void setup()
{
  Serial.begin(9600);

  for (size_t i = 0; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);

  int h = DHT11.humidity;
  Serial.println(h);

  for (size_t i = 0; i < 10; i++)
  {
    digitalWrite(i, LOW);
  }

  if (h > 0)
  {
    digitalWrite(0, HIGH);
  }
  if (h > 10)
  {
    digitalWrite(1, HIGH);
  }
  if (h > 20)
  {
    digitalWrite(2, HIGH);
  }
  if (h > 30)
  {
    digitalWrite(3, HIGH);
  }
  if (h > 40)
  {
    digitalWrite(4, HIGH);
  }
  if (h > 50)
  {
    digitalWrite(5, HIGH);
  }
  if (h > 60)
  {
    digitalWrite(6, HIGH);
  }
  if (h > 70)
  {
    digitalWrite(7, HIGH);
  }
  if (h > 80)
  {
    digitalWrite(8, HIGH);
  }
  if (h > 90)
  {
    digitalWrite(9, HIGH);
  }

  delay(1000);
}
