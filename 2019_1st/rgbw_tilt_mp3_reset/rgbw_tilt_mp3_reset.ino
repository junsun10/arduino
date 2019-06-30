//최종

//mp3
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>


//빨간색 순차 점등

#include <Adafruit_NeoPixel.h>   // 네오픽셀 라이브러리를 불러옵니다.

#define PIN 6                      // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 60                  // 연결된 네오픽셀의 숫자입력
#define BRIGHTNESS 50               // 네오픽셀의 밝기를 설정합니다. (0~255)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRBW + NEO_KHZ800);


SoftwareSerial mySerial(10,11);//tx10rx11rx에 저항연결

//int busypin= 7;

//기울기센서
const int tilt_r1=2;
int sensorValue1=0;
const int tilt_r2=3;
int sensorValue2=0;
const int tilt_r3=4;
int sensorValue3=0;

//for
int white=255;
int red=0;
int green=0;
int blue=0;

//button
const int buttonPin=5;
int buttonState=0;

//압력센서
int analogPin = A0;
int sensorReading=0;

void setup() {
  //mp3
  Serial.begin (9600);
  mySerial.begin(9600);
  mp3_set_serial (mySerial);      // DFPlayer-mini mp3 module 시리얼 세팅
  delay(1);                     // 볼륨값 적용을 위한 delay
  mp3_set_volume (20);
  delay(1);
  mp3_play(1);
  
  
  
  //네오픽셀
  strip.setBrightness(BRIGHTNESS);
  strip.begin();                           // 네오픽셀 제어시작
  strip.show();
  
  
  pinMode(tilt_r1,INPUT);
  pinMode(tilt_r2,INPUT);
  pinMode(tilt_r3,INPUT);

  //button
  pinMode(buttonPin,INPUT);

}

void loop() {                              // 이 안에 입력한 내용들이 반복 실행됩니다
  //mp3
  //boolean play_state = digitalRead(busypin);
  //if(play_state==HIGH){
  //  mp3_next();
  //}

  sensorReading=analogRead(analogPin);
  Serial.println(sensorReading);

  
  //button
  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH){
    red=0;
    green=0;
    blue=0;
  }
  //led
  sensorValue1=digitalRead(tilt_r1);
  sensorValue2=digitalRead(tilt_r2);
  sensorValue3=digitalRead(tilt_r3);
  
  colorWipe(strip.Color(red,green,blue,0),0);
  delay(10);
  
  if(red<=255 && sensorReading>80){
    if(sensorValue1==HIGH){
      red=red+1;
    }
  }
  if(green<=255 && sensorReading>80){
    if(sensorValue2==HIGH){
      green=green+1;
    }
  }
  if(blue<=255 && sensorReading>80){
    if(sensorValue3==HIGH){
      blue=blue+1;
    }
  }
  
}

void colorWipe(uint32_t c, uint8_t wait){
  for(uint16_t i=0; i<strip.numPixels();i++){
    strip.setPixelColor(i,c);
    strip.show();
    delay(wait);
  }
}
