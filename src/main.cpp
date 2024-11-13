#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();


void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED); 
  tft.drawString("aboba", 20, 30);
}

void loop() {
  // put your main code here, to run repeatedly:
}
