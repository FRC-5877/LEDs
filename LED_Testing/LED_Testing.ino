#include <Adafruit_NeoPixel.h>

#define PIN 6
Adafruit_NeoPixel strip;
int amount = 136;
int matrix[amount];
void setup() {
  // put your setup code here, to run once:
  strip = Adafruit_NeoPixel(amount, PIN, NEO_GRB + NEO_KHZ800);
  strip.begin();
  strip.setPixelColor(amount, 0,0,0);
  strip.show();
}

void forwardMatrix() {
  int prev;
  int lit = 0;
  for( int i = 0; i < amount; i++) {
    if(lit == 0 && 

    prev = matrix[i];
  }  
}

void loop() {
  // put your main code here, to run repeatedly:
  int itr = 0;
  for(int i = 0; i < amount; i++) {
    strip.setPixelColor(i, 255, 0, 0);
    strip.show();
  }
}
