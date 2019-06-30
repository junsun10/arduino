#include <Servo.h>

Servo myservo;
int potpin=A0;
int val;
int btn=2;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  pinMode(btn,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(btn);

  if(val==1){
    myservo.write(10);
  }
  else{
    myservo.write(100);
  }
  delay(15);
}
