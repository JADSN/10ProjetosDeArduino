String letter = "";  // for incoming serial data

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {

  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    letter = Serial.readString();

    // say what you got:
    if(letter.equalsIgnoreCase("A")){
      Serial.println("Filmento Compatível: T --> A - T");
    }
    else if(letter.equalsIgnoreCase("T")){
      Serial.println("Filmento Compatível: A --> T - A");
    }
    else if(letter.equalsIgnoreCase("C")){
      Serial.println("Filmento Compatível: C --> C - G");
    }
    else{
      Serial.println("Filmento Compatível: G --> G - C");
    }
    
  }
}
