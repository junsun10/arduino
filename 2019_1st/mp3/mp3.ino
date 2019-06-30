#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

SoftwareSerial mySerial(10,11);//tx10rx11rx에 저항연결
 
void setup () {
    Serial.begin (9600);
    mySerial.begin(9600);
    mp3_set_serial (mySerial);      // DFPlayer-mini mp3 module 시리얼 세팅
    delay(1);                     // 볼륨값 적용을 위한 delay
    mp3_set_volume (20);          // 볼륨조절 값 0~30
}
 
void loop () {        
    mp3_play (1);    //0001 파일 플레이
    delay (180000);
    mp3_play (2);   //0002 파일 플레이
    delay (180000);

   
}
