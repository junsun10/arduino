const int pingPin1=8;
const int pingPin2=9;
int ledCount=6;
long duration,cm;

int ledPins[]={10,11,12,4,5,6};
int ledLevel;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pingPin1,OUTPUT);
  pinMode(pingPin2,INPUT);
  for(int thisLed=0;thisLed<ledCount;thisLed++){
    pinMode(ledPins[thisLed],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pingPin1,LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin1,HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin1,LOW);

  duration=pulseIn(pingPin2,HIGH);

  cm = microsecondsToCentimeters(duration);
  Serial.println(cm);
  cm=constrain(cm,0,30);
  ledLevel=map(cm,0,30,0,ledCount);
  
  for(int thisLed=0; thisLed<ledCount;thisLed++){
    if(thisLed<ledLevel){
      digitalWrite(ledPins[thisLed],HIGH);
    }
    else{
      digitalWrite(ledPins[thisLed],LOW);
    }
  }
  delay(10);
}

long microsecondsToCentimeters(long microseconds){
  return microseconds / 29 / 2;
}
