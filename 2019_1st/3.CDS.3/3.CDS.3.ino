const int cds=A0;
const int led1=9;
const int led2=10;
const int led3=11;

int sensorValue=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue=analogRead(cds);
  sensorValue=map(sensorValue,400,900,1,3);

  if(sensorValue==1){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  else if(sensorValue==2){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  else if(sensorValue==3){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
  }
  delay(2);
}
