#include <Arduino.h>

class PinManipulation
{
  private:
  public:
  
    void MyPinMode(int Pin , char Mode);
    void MyDigitalWrite(int Pin , bool State);
    bool MyDigitalRead(int Pin);
};
