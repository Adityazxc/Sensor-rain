#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
 const int Sensor_Hujan = 13;
 const int Alarm = 12;
 
void setup(){
  lcd.begin();
  pinMode(Sensor_Hujan, INPUT);
  pinMode(Alarm, OUTPUT);
}


void loop(){
  int Kondisi_sensor = digitalRead(Sensor_Hujan);
  if (Kondisi_sensor == HIGH){
    digitalWrite(Alarm, LOW);
    delay(1000);
    lcd.setCursor(0,0);
    lcd.print("Aman");       
    delay(1000);

    lcd.clear();
  delay(1000);
  
  }else {
  digitalWrite(Alarm, HIGH);
  delay(1000);
  lcd.setCursor(0,1);
  lcd.println("hujan Kampret");
  delay(1000);
  
  lcd.clear();
  delay(1000);
  
  }

}
