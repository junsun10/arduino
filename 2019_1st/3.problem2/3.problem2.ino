#include <Servo.h>

Servo myservo;

int pos=0;
const int cds=A0;

int sensorValue=0;

void setup() {
  // put your setup code here, to run once:

  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(cds);
  sensorValue = map(sensorValue,800,950,1,2);
  
  if (sensorValue==2){
    
    for(pos=0;pos<180;pos++){
      myservo.write(pos);
      delay(15);
     }
     for(pos=180;pos>=1;pos--){
      myservo.write(pos);
      delay(2);
    }
   }
}
