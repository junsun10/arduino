//빨간색 순차 점등

#include <Adafruit_NeoPixel.h>   // 네오픽셀 라이브러리를 불러옵니다.

#define PIN 6                      // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 60                  // 연결된 네오픽셀의 숫자입력
#define BRIGHTNESS 50               // 네오픽셀의 밝기를 설정합니다. (0~255)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRBW + NEO_KHZ800);

//기울기센서
const int tilt=2;
int sensorValue=0;



void setup() {
  strip.setBrightness(BRIGHTNESS);
  strip.begin();                           // 네오픽셀 제어시작
  strip.show(); 
  
  pinMode(tilt,INPUT);
}

void loop() {                              // 이 안에 입력한 내용들이 반복 실행됩니다
                             // 네오픽셀 초기화

  sensorValue=digitalRead(tilt);

  
  
  if(sensorValue==HIGH){
    
    for(int i=0;i<LEDNUM;i++){
      strip.setPixelColor(i, 255, 0, 0, 0);     // (A,R,G,B,W) A번째 LED를 RGBW (0~255) 만큼의 밝기로 켭니다.
      strip.show();
      delay(20);
    }
  }
  else{
    rainbow(20);

    }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}
//255가지의 색을 나타내는 함수
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}
