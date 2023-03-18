void setup() {
  // set pins 2 to 7 as outputs
  for (int i = 1; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // shift LEDs left
  for (int i = 1; i <= 6; i++) {
    digitalWrite(i, HIGH);  // turn LED on
    delay(500);             // wait 500ms
    digitalWrite(i, LOW);   // turn LED off
  }
  
  // shift LEDs right
  for (int i = 7; i >= 1; i--) {
    digitalWrite(i, HIGH);  // turn LED on
    delay(500);             // wait 500ms
    digitalWrite(i, LOW);   // turn LED off
  }
}
