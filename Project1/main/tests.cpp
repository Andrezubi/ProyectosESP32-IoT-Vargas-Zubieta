/* #include "LED.h"
#include "SonarSensor.h"
SonarSensor sonar(26,27);
void setup() {

    Serial.begin(9600);

}

void loop() {
    float dist=sonar.getDistanceCm();
    Serial.print("Distancia medida :");
    Serial.print(dist);
    Serial.print(" cm");
    Serial.println("");

    delay(100);
} */



//these tests were made just to measure distance without any other aspect