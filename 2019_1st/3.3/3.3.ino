const int Tilt=2;
const int led1=8;
const int led2=9;
const int led3=10;
const int led4=11;

int buttonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(Tilt,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(Tilt);

  if(buttonState==HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
}
