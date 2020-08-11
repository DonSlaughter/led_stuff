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
#define DATA_PIN 2
#define BRIGHTNESS 90
#define COLOR_ORDER GBR
#define LED_TYPE WS2812B

CRGB leds[NUM_LEDS];

int red_poti = A0;
int red_value;
int green_poti = A1;
int green_value;
int blue_poti = A2;
int blue_value;

void set_Color_RGB(int r, int g, int b) {
	CRGB color = CRGB(r, g, b);
	fill_solid(leds, NUM_LEDS, color);
}

void print_values(int r, int g, int b) {
	char buf[100];
	sprintf(buf, "Red: %d, Green: %d, Blue: %d", r, g, b);
	Serial.println(buf);
}

void setup(){
	// initialize LED digital pin as an output
	//pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(9600);
	FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
}

void loop(){
	red_value = analogRead(red_poti);
	red_value = map(red_value, 0, 1023, 0, 255);
	green_value = analogRead(green_poti);
	green_value = map(green_value, 0, 1023, 0, 255);
	blue_value = analogRead(blue_poti);
	blue_value = map(blue_value, 0, 1023, 0, 255);
	set_Color_RGB(red_value, green_value, blue_value);
	print_values(red_value, green_value, blue_value);
}
