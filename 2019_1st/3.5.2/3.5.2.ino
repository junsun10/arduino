int ledPins[]={3,5,6,9,10,11};
int pinCount=6;
int brightness=0;

void setup() {
  // put your setup code here, to run once:

  for(int thisPin=0; thisPin<pinCount; thisPin++){
    pinMode(ledPins[thisPin],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int thisPin=0; thisPin<pinCount; thisPin++){
    for(int i=0; i<=255; i++){
      analogWrite(ledPins[thisPin],i);
      delay(5);
    }
    for(int j=255; j>=0; j--){
      analogWrite(ledPins[thisPin],j);
      delay(5);
  }
    
  }
  for(int thisPin=pinCount-1; thisPin>=0; thisPin--){
    for(int i=0; i<=255; i++){
      analogWrite(ledPins[thisPin],i);
      delay(5);
    }
    for(int j=255; j>=0; j--){
      analogWrite(ledPins[thisPin],j);
      delay(5);
    }
  }
  
}
