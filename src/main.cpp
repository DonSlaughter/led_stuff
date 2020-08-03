/* LED Light with WS2812b
   It is a LED Matrix with 8x8 single LED's
   The colors are chosen with 3 Potentiometers in HSV
*/
#include <Arduino.h>
#include "FastLED.h"

#define NUM_LEDS 1

#define DATA_PIN 3
CRGB leds{NUM_LEDS};

void setup(){
	Serial.begin(9600);
	Serial.write("Start initialization");
	FastLED.addLeds<WS2812B, DATA_PIN. GBR>(leds, NUM_LEDS);
	//TODO initialization
	Serial.write("initialization finished, starting loop");
}

void loop(){
	leds[0] = CRGB::Red;
	FastLED.show();
	delay(500);
	leds[0] = CRGB::Black;
	FastLED.show();
	delay(500);

}
