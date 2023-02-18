#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

#define TFT_CS 4 //  D2 = GPIO 4
#define TFT_RST 0 // D3 = GPIO 0
#define TFT_DC 2 //  D4 = GPIO 2

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

 
void setup() {
  Serial.begin(9600);
    
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setRotation(1);

  

  // World Icon
  tft.fillRoundRect(245,35,34,34,30,ILI9341_WHITE);
  tft.fillRoundRect(248,38,28,28,30,ILI9341_BLACK);  
  tft.fillRoundRect(257,35,11,34,30,ILI9341_WHITE);
  tft.fillRoundRect(260,38,5,28,30,ILI9341_BLACK);
  tft.fillRoundRect(245,47,34,11,30,ILI9341_WHITE);
  tft.fillRoundRect(248,50,28,5,30,ILI9341_BLACK);
  tft.fillRoundRect(257,47,11,11,0,ILI9341_WHITE);
  tft.fillRoundRect(260,50,5,5,0,ILI9341_BLACK);

  
  // Hello World Text
  tft.setCursor(50, 50); 
  tft.setTextColor(ILI9341_GREEN);  tft.setTextSize(6); 
  tft.println("HELLO");

  tft.setCursor(50, 100); 
  tft.setTextColor(ILI9341_GREEN);  tft.setTextSize(6); 
  tft.println("WORLD");

  
  // Line
  tft.drawLine(50, 150, 250, 150, ILI9341_GREEN);
}
 
 
void loop() {                 

  
  
}
