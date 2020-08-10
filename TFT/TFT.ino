#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>
#include <dht11.h>

#define TFT_CS 6
#define TFT_RST 4 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC 5
#define DHT11PIN 0

// Color definitions
#define ST7735_BLACK 0x0000
#define ST7735_BLUE 0xF800
#define ST7735_RED 0x001F
#define ST7735_ORANGE 0x00AA
#define ST7735_GREEN 0x07E0
#define ST7735_CYAN 0xFFE0
#define ST7735_MAGENTA 0xF81F
#define ST7735_YELLOW 0x07FF
#define ST7735_WHITE 0xFFFF

// For 1.44" and 1.8" TFT with ST7735 use:
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

dht11 DHT11;

int old_t, old_h;

void setup(void)
{
  Serial.begin(9600);
  Serial.print(F("Hello! ST7735 TFT Test"));

  // OR use this initializer if using a 1.8" TFT screen with offset such as WaveShare:
  tft.initR(INITR_GREENTAB); // Init ST7735S chip, green tab

  tft.fillScreen(ST7735_BLACK);
  tft.setTextWrap(false);
  delay(500);
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);
  int new_t = DHT11.temperature;
  int new_h = DHT11.humidity;

  if (old_t != new_t || old_h != new_h)
  {
    old_t = new_t;
    old_h = new_h;

    tft.setCursor(0, 0);
    tft.setTextColor(ST7735_GREEN);
    tft.setTextSize(1);
    tft.println("Temperature:\n");
    tft.setTextSize(2);
    tft.fillRect(0, 10, 30, 20, ST7735_BLACK);
    tft.print(old_t);
    tft.print(" C");

    tft.setCursor(0, 50);
    tft.setTextSize(1);
    tft.println("Humidity:\n");
    tft.setTextSize(2);
    tft.fillRect(0, 60, 30, 20, ST7735_BLACK);
    tft.print(old_h);
    tft.print(" %");
  }

  delay(1000);
}
