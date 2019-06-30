const byte numeral[2]={
  
  B01100000,//1
  B00001100

};
const int Tilt = 10;
int buttonState=0;

const int segmentPins[8]={9,8,7,6,5,4,3,2};

void showDigit(int number){
  boolean isBitSet;

  for(int segment=1;segment<8;segment++){
    if(number<0 || number>9){
      isBitSet=0;
    }
    else{
      isBitSet=bitRead(numeral[number],segment);
    }
    digitalWrite(segmentPins[segment],isBitSet);
  }
}

void setup() {
  // put your setup code here, to run once:

  pinMode(Tilt,INPUT);
  
  for(int i=0;i<8;i++){
    pinMode(segmentPins[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState=digitalRead(Tilt);

  if(buttonState==LOW){
    showDigit(0);
  }
  else{
    showDigit(1);
  }
}
