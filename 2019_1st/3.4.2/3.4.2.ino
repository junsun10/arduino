//하나씩 키고꺼지기
int buttonPin=2;
int led1=13;
int led2=10;

int buttonPushCounter=0;
int buttonState=0;
int lastButtonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
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
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
  }
  lastButtonState=buttonState;
}
