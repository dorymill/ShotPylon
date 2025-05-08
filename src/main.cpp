#include <Arduino.h>

int shotCounter = 0;

void setup() {

  pinMode(A4, INPUT);

  Serial.begin(115200);

}

void loop() {
  

  int sensorVal = analogRead(A4);

  if(sensorVal < 500) {
    shotCounter++;
    Serial.print("\nShot detected! (");
    Serial.print(shotCounter);
    Serial.print(")\n");
    delay(90);
  }

}
