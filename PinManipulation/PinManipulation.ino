#include "MyPins.h"

PinManipulation MyPins;

void setup() 
{
  
  Serial.begin(9600);
  
  MyPins.MyPinMode(3 , 'O');
  MyPins.MyPinMode(4 , 'P');
  
}

void loop() 
{
  
  MyPins.MyDigitalWrite(3 , !MyPins.MyDigitalRead(4));
  
}
