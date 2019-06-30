const int Tilt=2;
const int led1=8;

int buttonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led1,OUTPUT);
  pinMode(Tilt,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(Tilt);

  if (buttonState==HIGH){
    digitalWrite(led1,HIGH);
  }
  else{
    digitalWrite(led1,LOW);
  }
  
}
