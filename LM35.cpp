/*    READ FIRST 
 * 
 * LM35 Library 
 * LM35.CPP
 * VERSION: 1.0.1
 * 
 * Author: Guilherme Gomes Zucco
 * 
 * This library set the pin where is the lm35 sensor,
 * and converts the raw value to Celsius or Fahrenheit or Kelvin.
 * 
 * 
 * Version 1.0.2 
 * pinMode(pin, INPUT);
 * Version(),Pin(), Value() 
*/
*/

#include "Arduino.h"
#include "LM35.h"

LM35::LM35(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}

float LM35::cel()
{
   float tempC = (float(analogRead(_pin))*5/(1023))/0.01;
   return tempC;
}

float LM35::fah()
{
   float tempF = (((float(analogRead(_pin))*5/(1023))/0.01)*1.8)+32;
   return tempF;
}

float LM35::kel()
{
   float tempK = ((float(analogRead(_pin))*5/(1023))/0.01)+273;
   return tempK;
}


int LM35::Pin()
{
	int _P = _pin;
	return _P;
}

int LM35::Value()
{
	int _V = analogRead(_pin);
	return _V;
}

String LM35::Version()
{
	String _Version = "V 1.0.1";
	return _Version;
}
