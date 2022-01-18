#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define SERVO1 9
Servo servo1;

int angulo = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("SERVO MOTOR");
  servo1.attach(SERVO1);  
  servo1.write(angulo);  
  delay(1000);   
}

void loop() {

  for (angulo = 10; angulo <= 180; angulo += 10){
    lcd.setCursor(0, 1);    
    lcd.print("ANG: ");
    lcd.print(angulo);
    servo1.write(angulo);  
    delay(500);    
  }

    for (angulo = 180; angulo >= 0; angulo -= 10){
    lcd.setCursor(0, 1);    
    lcd.print("ANG: ");
    lcd.print(angulo);
    servo1.write(angulo);  
    lcd.print("   ");
    delay(500);    
  }

  
  lcd.setCursor(0, 1);    
  lcd.print("ANG:FIM     ");
  delay(2000);
}