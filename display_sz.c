/*
   Vinicius Junior
   vinicius.dphelippe@gmail.com

   Printando um coração pisca-pisca no LCD.

*/


#include <LiquidCrystal.h>
#define Luz_Fundo  7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte heart[8] = { 0b00000, // vetor de bytes correspondentes
0b01010,  // ao desenho do coração
0b11111,
0b11111,
0b01110,
0b00100,
};

void setup()
{
lcd.begin(16, 2);
pinMode(Luz_Fundo,OUTPUT);
digitalWrite(Luz_Fundo,HIGH);
lcd.setCursor(0,0);
lcd.print(" Hello World ");

lcd.createChar(1, heart); // envia nosso character p/ o display
}

void loop()
{
lcd.setCursor(3,1);
lcd.write(1); // desenha o coração
delay(500);
lcd.setCursor(3,1);
lcd.print(" Hello World! "); // Após 0.5s apaga o coração, assim ele
delay(500); // ficará piscando
}
