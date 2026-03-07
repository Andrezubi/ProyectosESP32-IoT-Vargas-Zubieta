#include <Arduino.h>
class SonarSensor
{
private:
  byte trigPin;
  byte echoPin;

public:
  SonarSensor(byte trigPin, byte echoPin)
  {
    this->trigPin=trigPin;
    this->echoPin=echoPin;
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    digitalWrite(trigPin, LOW);
  }
  float getDistanceCm()
  {

    // enviar pulso de trigger
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // medir tiempo del eco
    unsigned long duration = pulseIn(echoPin, HIGH, 30000);

    if (duration == 0)
      return -1; // no se detectó objeto

    return (duration * 0.0343) / 2.0;
  }
};