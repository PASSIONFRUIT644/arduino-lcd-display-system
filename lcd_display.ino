#include <LiquidCrystal.h>
const int rs = 0, en = 1, d4= 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1,0);
  lcd.print("PH=8 AMONIO=0,49 mg/l ");
  lcd.setCursor(0,1);
  lcd.print(" BACTERIA=97UFC");
  
  
}

void loop(){
  {
  for(int positionCounter = 1; positionCounter++;) {
    lcd.scrollDisplayLeft();
    delay(5000);
  }
  delay(5000);}
                 }
