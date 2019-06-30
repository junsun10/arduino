#include "pitches.h"

int melody[]={
  NOTE_C4, NOTE_G3, NOTE_A3,NOTE_G3,0,NOTE_B3,NOTE_C4};

int noteDurations[]{
  4,8,8,4,4,4,4,4};

int i=1;

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(i>0){
    for(int thisNote=0;thisNote<8;thisNote++){
      int noteDuration=1000/noteDurations[thisNote];
      tone(8,melody[thisNote],noteDuration);

      int pauseBetweenNotes = noteDuration*1.30;
      delay(pauseBetweenNotes);

      noTone(8);
    }
    i--;
  }
}
