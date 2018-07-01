// Fonte: http://labdegaragem.com/profiles/blogs/projeto-sinalizador-de-c-digo-morse-s-o-s
int ledPin = 10;

void setup() 
{
  pinMode(ledPin, OUTPUT); 
}

void loop() 
{

  // Represeta 3 pontos por meio do LED
  for (int x=0; x<3; x++) {
    digitalWrite(ledPin, HIGH); 
    delay(150); 
    digitalWrite(ledPin, LOW); 
    delay(100); 
  }  
  delay(100); 
  
  // Represeta 3 traços por meio do LED
  for (int x=0; x<3; x++) {
    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(400); // waits for 400ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100); // waits for 100ms
  }
  delay(100); 

  // Represeta 3 pontos por meio do LED
  for (int x=0; x<3; x++) {
    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(150); // waits for 150ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100); // waits for 100ms
  }
  
  // Repete ação após 5 segundos.
  delay(5000); 
}
