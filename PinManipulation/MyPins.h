#include <Arduino.h>

class PinManipulation
{
  public:
    void MyPinMode(int Pin , char Mode);
    void MyDigitalWrite(int Pin , bool State);
    bool MyDigitalRead(int Pin);
};

class Timer
{
  private:
    bool _TimerOverflowState = false;
  public:
    void HandleInterrupt();
    void Activate16BitTimer();
    bool PWMSignal();
};
