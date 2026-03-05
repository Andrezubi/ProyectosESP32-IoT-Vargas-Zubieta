const int trigPin = 8;
const int echoPin = 10;

long duration;
int distanceCm;

void setup() {
  pinMode(trigPin, OUTPUT); // Trigger pin sets the pulse out
  pinMode(echoPin, INPUT);  // Echo pin reads the pulse duration
  Serial.begin(9600);
}

void loop() {
  // Clear the trigPin, set low for 2 microseconds
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, returns the sound wave travel time in microseconds
  duration = [pulseIn](https://www.arduino.cc)(echoPin, HIGH);

  // Calculate the distance
  // Speed of sound is 0.034 cm/uS (or 340 m/s)
  // Distance = (Duration * Speed of Sound) / 2 (divide by 2 because it's round trip)
  distanceCm = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");
  
  delay(100);
}
