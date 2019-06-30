#include "pitches.h"

int melody[]={
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorReading=analogRead(A0);
  Serial.println(sensorReading);
  int number=map(sensorReading,500,920,0,5);
  tone(9,melody[number],10);
  delay(1);
}
