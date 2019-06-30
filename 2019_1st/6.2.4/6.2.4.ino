#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("SCROLL RIGHT");
  for(int positionCounter=0;positionCounter<16;positionCounter++){
    lcd.scrollDisplayRight();
    delay(1000);
  }
  lcd.clear();

  lcd.print("                SCROLL LEFT");
  for(int positionCounter=0;positionCounter<16;positionCounter++){
    lcd.scrollDisplayLeft();
    delay(1000);
  }
  lcd.clear();
}
