#include "Arduino.h"
#include "read_values.h"

read_values::read_values(int potentiometer_01, int potentiometer_02, int potentiometer_03)
{
	_potentiometer_01 = potentiometer_01;
	_potentiometer_02 = potentiometer_02;
	_potentiometer_03 = potentiometer_03;
}

int read_values::convert(int _potentiometer_01, int _potentiometer_02, int _potentiometer_03)
{
	_value_potentiometer_01 = analogRead(_potentiometer_01);
	_value_potentiometer_01 = map(_value_potentiometer_01, 0, 1023, 0, 255);
	_value_potentiometer_02 = analogRead(_potentiometer_02);
	_value_potentiometer_02 = map(_value_potentiometer_02, 0, 1023, 0, 255);
	_value_potentiometer_03 = analogRead(_potentiometer_03);
	_value_potentiometer_03 = map(_value_potentiometer_03, 0, 1023, 0, 255);
	return ( _value_potentiometer_01, _value_potentiometer_02, _value_potentiometer_03 );
}
