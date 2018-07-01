// Fonte: https://www.filipeflop.com/blog/controlando-um-lcd-16x2-com-arduino/

//Programa: Alfabeto com Display LCD 16 x 2
#include <LiquidCrystal.h>

//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
    //Define o número de colunas e linhas do LCD
    lcd.begin(16, 2);
}

void loop()
{
    //Limpa a tela
    lcd.clear();
    //Linha e Coluna que será mostrada o número.
    lcd.setCursor(0, 0);
    //Mostra o número.
    lcd.print("1");

    lcd.setCursor(1, 0);
    lcd.print("2");

    lcd.setCursor(2, 0);
    lcd.print("3");

    lcd.setCursor(3, 0);
    lcd.print("4");

    lcd.setCursor(4, 0);
    lcd.print("5");

    lcd.setCursor(5, 0);
    lcd.print("6");

    lcd.setCursor(7, 0);
    lcd.print("7");

    lcd.setCursor(8, 0);
    lcd.print("8");

    lcd.setCursor(9, 0);
    lcd.print("9");
    
    delay(3000);
}