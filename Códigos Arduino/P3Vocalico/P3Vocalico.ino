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
    lcd.setCursor(3, 0);
    //Mostra o oxítona.
    lcd.print("oxítona");

    lcd.setCursor(3, 1);
    // mostra Exemplo
    lcd.print("Troféu");

    delay(3000);

    //Limpa a tela
    lcd.clear();
    //Linha e Coluna que será mostrada o número.
    lcd.setCursor(3, 0);
    //Mostra a paroxítona.
    lcd.print("paroxítona");

    lcd.setCursor(3, 1);
    // Mostra exemplo.
    lcd.print("Vírus");

    //Limpa a tela
    lcd.clear();
    //Linha e Coluna que será mostrada o número.
    lcd.setCursor(3, 0);
    //Mostra a proparoxítona.
    lcd.print("proparoxítona");

    lcd.setCursor(3, 1);
    // Mostra exemplo.
    lcd.print("Ângulo ");
    
}