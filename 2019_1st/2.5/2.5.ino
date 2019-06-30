
const int buttonPin=2;
const int ledPin=10;
const int ledPin2=9;

int buttonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(ledPin2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH){
    digitalWrite(ledPin,HIGH);
    digitalWrite(ledPin2,LOW);
  }
  else{
    digitalWrite(ledPin,LOW);
    digitalWrite(ledPin2,HIGH);
  }
}
