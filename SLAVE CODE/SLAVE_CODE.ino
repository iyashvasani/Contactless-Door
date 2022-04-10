#include <LiquidCrystal.h>
#include <Servo.h>
#define myservo_pin 2

Servo myservo;
LiquidCrystal lcd(6, 7, 8, 9, 10, 11);
//LCD 1- GND
//LCD 2- Vcc
//LCD 3- GND
//LCD 4- Pin 6
//LCD 5- GND
//LCD 6- Pin 7
//LCD 11- Pin 8
//LCD 12- Pin 9
//LCD 13- Pin 10
//LCD 14- Pin 11

void setup() {
  myservo.attach(myservo_pin);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Hello Welcome to");
  lcd.setCursor(2, 1);
  lcd.print("Happy Home:)");
  Serial.begin(38400);
}

void loop() {
  if (Serial.available())
  {
    char val = Serial.read();
    if (val == '1')
    {
      myservo.write(45);
      delay(1000);
      lcd.setCursor(0, 0);
      lcd.print("Hello Welcome to");
      lcd.setCursor(2, 1);
      lcd.print("Happy Home:)");
    }
    if (val == '0')
    {
      myservo.write(135);
      delay(1000);
      lcd.clear();
    }
  }
}
