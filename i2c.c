Segue um código básico de Hello World no endereço 0x20

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // Criando um LCD de 16x2 no endereço 0x20

void setup()
{
  lcd.init();                 // Inicializando o LCD
  lcd.backlight();            // Ligando o BackLight do LCD
  lcd.print("Hello, world!"); // Exibindo no LED Hello, world!
}

void loop()
{
}




