/* LED Light with WS2812b
   It is a LED Matrix with 8x8 single LED's
   The colors are chosen with 3 Potentiometers in HSV
*/

#ifndef LED_BUILLTIN
	#define LED_BUILLTIN PC13
#endif

#include <Arduino.h>

void setup(){
	// initialize LED digital pin as an output
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);
	digitalWrite(LED_BUILTIN,LOW);
	delay(1000);
}
