#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>
#include <dht11.h>

#define TFT_CS 6
#define TFT_RST 4 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC 5
#define DHT11PIN 0

// For 1.44" and 1.8" TFT with ST7735 use:
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

dht11 DHT11;

void setup(void)
{
  Serial.begin(9600);
  Serial.print(F("Hello! ST77xx TFT Test"));

  // OR use this initializer if using a 1.8" TFT screen with offset such as WaveShare:
  tft.initR(INITR_GREENTAB); // Init ST7735S chip, green tab

  tft.fillScreen(ST77XX_BLACK);

  delay(500);
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);
  int h = DHT11.humidity;
  int t = DHT11.temperature;

  tft.fillScreen(ST7735_BLACK);
  tft.setTextWrap(false);
  
  tft.setCursor(0, 0);
  tft.setTextColor(ST7735_GREEN);
  tft.setTextSize(1);
  tft.println("Temperature:\n");
  tft.setTextSize(2);
  tft.print(t);
  tft.print(" C");

  tft.setCursor(0, 50);
  tft.setTextSize(1);
  tft.println("Humidity:\n");
  tft.setTextSize(2);
  tft.print(h);
  tft.print(" %");
  
  delay(1000);
}
