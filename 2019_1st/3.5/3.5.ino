int ledPins[]={3,4,5,6,7,8};
int pinCount=6;

void setup() {
  // put your setup code here, to run once:

  for(int thisPin=0; thisPin<pinCount; thisPin++){
    pinMode(ledPins[thisPin],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int thisPin=0; thisPin<pinCount; thisPin++){
    digitalWrite(ledPins[thisPin],HIGH);
    delay(100);
    digitalWrite(ledPins[thisPin],LOW);
    
  }
  for(int thisPin=pinCount-1; thisPin>=0; thisPin--){
    digitalWrite(ledPins[thisPin],HIGH);
    delay(100);
    digitalWrite(ledPins[thisPin],LOW);
    
  }
  
}
