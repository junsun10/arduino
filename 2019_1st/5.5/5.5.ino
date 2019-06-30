const byte numeral[10]={
  B11111100,//0
  B01100000,//1
  B11011010,//2
  B11110010,
  B01100110,
  B10110110,
  B00111110,
  B11100000,
  B11111110,
  B11100110//9
};

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

  for(int i=0;i<8;i++){
    pinMode(segmentPins[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0;i<=10;i++){
    showDigit(i);
    delay(500);
  }
  delay(500);
}
