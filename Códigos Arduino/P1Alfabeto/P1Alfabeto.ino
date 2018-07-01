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
    //Linha e Coluna que será mostrada a letra.
    lcd.setCursor(0, 0);
    //Mostra a letra.
    lcd.print("A");

    lcd.setCursor(1, 0);
    lcd.print("B");

    lcd.setCursor(2, 0);
    lcd.print("B");

    lcd.setCursor(3, 0);
    lcd.print("C");

    lcd.setCursor(4, 0);
    lcd.print("D");

    lcd.setCursor(5, 0);
    lcd.print("E");

    lcd.setCursor(6, 0);
    lcd.print("F");

    lcd.setCursor(7, 0);
    lcd.print("G");

    lcd.setCursor(8, 0);
    lcd.print("H");

    lcd.setCursor(9, 0);
    lcd.print("I");

    lcd.setCursor(10, 0);
    lcd.print("J");

    lcd.setCursor(11, 0);
    lcd.print("K");

    lcd.setCursor(12, 0);
    lcd.print("L");

    lcd.setCursor(13, 0);
    lcd.print("M");

    lcd.setCursor(14, 0);
    lcd.print("N");

    lcd.setCursor(15, 0);
    lcd.print("O");

    lcd.setCursor(16, 0);
    lcd.print("P");

    lcd.setCursor(0, 1);
    lcd.print("Q");

    lcd.setCursor(1, 1);
    lcd.print("R");

    lcd.setCursor(2, 1);
    lcd.print("S");

    lcd.setCursor(3, 1);
    lcd.print("T");

    lcd.setCursor(4, 1);
    lcd.print("U");

    lcd.setCursor(5, 1);
    lcd.print("V");

    lcd.setCursor(6, 1);
    lcd.print("X");

    lcd.setCursor(7, 1);
    lcd.print("W");

    lcd.setCursor(8, 1);
    lcd.print("Y");

    lcd.setCursor(9, 1);
    lcd.print("Z");

    delay(3000);
}