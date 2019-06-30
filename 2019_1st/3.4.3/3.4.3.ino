int buttonPin=2;
int led1=11;


int buttonPushCounter=0;
int buttonState=0;
int lastButtonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin,INPUT);
  pinMode(led1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  buttonState=digitalRead(buttonPin);

  if(lastButtonState!=buttonState){
    if(buttonState==1){
      buttonPushCounter++;
    }
    delay(50);
  }
  if(buttonPushCounter%4==1){
    analogWrite(led1,50);
  }
  else if(buttonPushCounter%4==2){
    analogWrite(led1,150);
  }
  else if(buttonPushCounter%4==3){
    analogWrite(led1,250);
  }
  else{
    analogWrite(led1,LOW);
  }
  lastButtonState=buttonState;
}
