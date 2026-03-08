
#include "LED.h"
#include "SonarSensor.h"
SonarSensor sonar(26, 27);
LED blueLED(16);
LED greenLED(17);
LED yellowLED(18);
LED redLED(19);
int currentZone=-1;
int blinksPerSecond = 1;
void setup()
{

  Serial.begin(9600);
  blueLED.setBlinksPerSecond(blinksPerSecond);
  greenLED.setBlinksPerSecond(blinksPerSecond);
  yellowLED.setBlinksPerSecond(blinksPerSecond);
  redLED.setBlinksPerSecond(blinksPerSecond);
}

void loop()
{
  float distance = sonar.getDistanceCm();

  Serial.print("Distancia: ");
  Serial.println(distance);

  int zone;

  if(distance == -1) zone = -1;
  else if(distance < 20) zone = 0;
  else if(distance < 50) zone = 1;
  else if(distance < 80) zone = 2;
  else zone = 3;

  if(zone != currentZone)
  {
    turnOffAllLEDS();

    if(zone == 0)
      greenLED.setState(LED::BLINK);
    else if(zone == 1)
      yellowLED.setState(LED::BLINK);
    else if(zone == 2)
      redLED.setState(LED::BLINK);
    else if(zone == 3)
      blueLED.setState(LED::BLINK);

    currentZone = zone;
  }

  updateAllLEDS();

  delay(100);
}

void turnOffAllLEDS()
{
  greenLED.setState(LED::OFF);
  yellowLED.setState(LED::OFF);
  redLED.setState(LED::OFF);
  blueLED.setState(LED::OFF);
}
void updateAllLEDS()
{
  greenLED.update();
  yellowLED.update();
  redLED.update();
  blueLED.update();
}
