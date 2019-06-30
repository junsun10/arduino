int analogPin=A0;
int ledCount=6;

int ledPins[]={2,3,4,5,6,7};


void setup() {
  // put your setup code here, to run once:

  for(int thisLed=0;thisLed<ledCount;thisLed++){
    pinMode(ledPins[thisLed],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorReading=analogRead(analogPin);
  int ledLevel=map(sensorReading,0,1023,0,ledCount+2);

  for(int thisLed=0;thisLed<ledCount;thisLed++){

    if(thisLed<ledLevel){
      digitalWrite(ledPins[thisLed],HIGH);
    }
    else{
      digitalWrite(ledPins[thisLed],LOW);
    }
  }
}
