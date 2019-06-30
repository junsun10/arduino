int buttonPin=2;
int led=13;

int buttonPushCounter=0;
int buttonState=0;
int lastButtonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin,INPUT);
  pinMode(led,OUTPUT);
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
  if(buttonPushCounter%2==1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  lastButtonState=buttonState;
}
