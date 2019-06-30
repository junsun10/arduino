//사용x
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello,world!");
  delay(1000);
  lcd.clear;
}

void loop() {
  // put your main code here, to run repeatedly:

}
