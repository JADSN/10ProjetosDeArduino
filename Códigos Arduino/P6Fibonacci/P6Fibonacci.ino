// Fonte: https://gist.github.com/patrickdevivo/1604221
int ledPin = 13;
int i = 0;

int fib(int initial) {
  if (initial <=1) {
    return initial;
  }
  else {
    return fib(initial-1)+fib(initial-2);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(fib(i)*1000);


i++;

}
