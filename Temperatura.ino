#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);

}

float AnalogTemp = A5;
float temperatura;
void loop() {

  lcd.setCursor(0,0);
  lcd.print("Hello");
  lcd.setCursor(2,1);
  lcd.print("World");

  
  float DigitalTemp = analogRead(AnalogTemp);
  float voltage = DigitalTemp*(5.0/1023.0);
  float temperature = voltage*100.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("  ");
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print("\n");
  delay(1000);
}
