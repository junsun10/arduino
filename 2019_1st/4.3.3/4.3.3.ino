#include "pitches.h"

int btn[]={
  3,4,5};

int notes[]={
  NOTE_A4,NOTE_B4,NOTE_C3};


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<3;i++){
    pinMode(btn[i],INPUT);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int thisSensor=0;thisSensor<3;thisSensor++){
    int sensorReading = digitalRead(btn[thisSensor]);

    if(sensorReading==1){
      tone(8,notes[thisSensor],20);
    }
  }
}
