#ifndef read_values_h
#define read_values_h

#include "Arduino.h"

class read_values
{
	public:
		read_values(int potentiometer_01, int potentiometer_02, int potentiometer_03);
		int convert(int _potentiometer_01, int _potentiometer_02, int _potentiometer_03);
	private:
		int _potentiometer_01;
		int _potentiometer_02;
		int _potentiometer_03;
		int _value_potentiometer_01;
		int _value_potentiometer_02;
		int _value_potentiometer_03;
};

#endif
