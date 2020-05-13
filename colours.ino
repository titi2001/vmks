#include <FastLED.h>
#define DATA_PIN 4
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
#define NUM_LEDS 27
#define BRIGHTNESS 20
#define FASTLED_ALLOW_INTERRUPTS 0

//byte a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
byte o[] = {26,0,2,4,6,18,14,10,20,12,8,16,24,22};
byte blue[] = {0,1,3,5,9,11,13,19,23,15,7,17,21,25};
byte le;
CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
 
}

 void loop() {
     for (int y=1;y<sizeof(o)+1;y++){
      le = o[y];
      leds[le].setRGB( 255,157,0);     
      }
     
      
      for (int y=1;y<sizeof(blue)+1;y++){
      le = blue[y];
      leds[le].setRGB( 55,95,137);   
      Serial.println(blue[y]);  
      }
      leds[26].setRGB( 255,157,0);
      FastLED.show(); 
      
      
 }
    
