/*    READ FIRST 
 * 
 * LM35 Library 
 * LM35.H
 * VERSION: 1.0.1
 * 
 * Author: Guilherme Gomes Zucco
 * 
 * This library set the pin where is the lm35 sensor,
 * and converts the raw value to Celsius or Fahrenheit or Kelvin.
  * Version V 1.0.2 Stefan Mühlbauer (08.06.2025)
 * Add : Pin(), Value(), Version()
*/

#ifndef LM35_h
#define LM35_h
#include "Arduino.h"


class LM35
{
   public:
       LM35(int pin);
       float cel();
       float fah();
       float kel();
       int Pin();
       int Value();
       String Version();

   private:
       int _pin;

};


#endif
