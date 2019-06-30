//빨간색 순차 점등

#include <Adafruit_NeoPixel.h>   // 네오픽셀 라이브러리를 불러옵니다.

#define PIN 6                      // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 60                  // 연결된 네오픽셀의 숫자입력
#define BRIGHTNESS 50               // 네오픽셀의 밝기를 설정합니다. (0~255)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRBW + NEO_KHZ800);

//기울기센서
const int tilt_r=2;
int sensorValue=0;

//for
int white=255;
int red=0;
int green=0;
int blue=0;

void setup() {
  strip.setBrightness(BRIGHTNESS);
  strip.begin();                           // 네오픽셀 제어시작
  strip.show();
  
  
  pinMode(tilt_r,INPUT);
}

void loop() {                              // 이 안에 입력한 내용들이 반복 실행됩니다
                           

  sensorValue=digitalRead(tilt_r);
  
  colorWipe(strip.Color(red,0,0,0),0);
  delay(10);
  
  if(red<=255){
    if(sensorValue==HIGH){
      red=red+2;
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
