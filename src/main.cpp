/* LED Light with WS2812b
   It is a LED Matrix with 8x8 single LED's
   The colors are chosen with 3 Potentiometers in HSV
*/

//#ifndef LED_BUILLTIN
//	#define LED_BUILLTIN PC13
//#endif

#include <Arduino.h>
#include "FastLED.h"

#define NUM_LEDS 1
#define DATA_PIN 13
#define BRIGHTNESS 90
#define COLOR_ORDER GBR
#define LED_TYPE WS2812B

CRGB leds[NUM_LEDS];

void setup(){
	// initialize LED digital pin as an output
	//pinMode(LED_BUILTIN, OUTPUT);
	FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
}

void loop(){
       // digitalWrite(LED_BUILTIN, HIGH);
       // delay(1000);
       // digitalWrite(LED_BUILTIN,LOW);
       // delay(1000);
}
