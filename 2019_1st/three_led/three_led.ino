
int led1=11;
int led2=5;
int led3=3;
int button=2;




void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(button)==1){
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led2,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led3,LOW);
    delay(50);
    }
  
}
