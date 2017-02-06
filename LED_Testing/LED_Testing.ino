#include <Adafruit_NeoPixel.h>

#define PIN 6
Adafruit_NeoPixel strip;
int amount = 141;
int i = 0;

void setup() {
  strip = Adafruit_NeoPixel(amount, PIN, NEO_GRB + NEO_KHZ800);
  strip.begin();
  strip.setPixelColor(amount, 0,0,0);
  strip.show();
}

void loop() {
  if(i >= amount) {
    i = 0;
  }
  if(i < amount) {
    if(i >= 5) {
      strip.setPixelColor((i-5), 0, 0, 0);
      strip.show();
    }
    strip.setPixelColor(i, 255, 0, 0);
    strip.show();
    i++;
  }
}
