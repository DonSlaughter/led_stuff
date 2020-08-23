/* LED Light with WS2812b
   It is a LED Matrix with 8x8 single LED's
   The colors are chosen with 3 Potentiometers in HSV
*/

#include <Arduino.h>
#include "FastLED.h"
#include "read_values.h"

#define NUM_LEDS 64
#define DATA_PIN 2
#define COLOR_ORDER GBR
#define LED_TYPE WS2812B

CRGB leds[NUM_LEDS];

//read_values read01(A0);
//read_values read02(A1);
//read_values read03(A2);
//int potentiometer_01 = A0;
//int value_potentiometer_01;
//int potentiometer_02 = A1;
//int value_potentiometer_02;
//int potentiometer_03 = A2;
//int value_potentiometer_03;

void set_Color_RGB(int r, int g, int b) {
	CRGB color = CRGB(r, g, b);
	fill_solid(leds, NUM_LEDS, color);
}

void print_values(int r, int g, int b) {
	char buf[100];
	sprintf(buf, "Potentiometer 01: %d, Potentiometer 02: %d, Potentiometer 03: %d", r, g, b);
	Serial.println(buf);
}

//int read_potentiometer (int A0, int A1, int A2) {
//	value_potentiometer_01 = analogRead(potentiometer_01);
//	value_potentiometer_01 = map(value_potentiometer_01, 0, 1023, 0, 255);
//	value_potentiometer_02 = analogRead(potentiometer_02);
//	value_potentiometer_02 = map(value_potentiometer_02, 0, 1023, 0, 255);
//	value_potentiometer_03 = analogRead(potentiometer_03);
//	value_potentiometer_03 = map(value_potentiometer_03, 0, 1023, 0, 255);
//	return (value_potentiometer_01, value_potentiometer_02, value_potentiometer_03);
//}


void setup(){
	// initia3ize LED digital pin as an output
	//pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(9600);
	FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
	FastLED.setBrightness(50);
}

void loop(){
//	read_potentiometer();
	//set_Color_RGB(value_potentiometer_01, value_potentiometer_02, value_potentiometer_03);
	//print_values(value_potentiometer_01, value_potentiometer_02, value_potentiometer_03);
	FastLED.show();
}
