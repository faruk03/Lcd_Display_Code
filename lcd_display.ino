#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();

}

void loop()
{



  display("    Farhana", "   Tabassum");
  delay(1000);


}

void display(String a, String b)
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(a + "                ");
  lcd.setCursor(0, 1);
  lcd.print(b + "                ");
}
