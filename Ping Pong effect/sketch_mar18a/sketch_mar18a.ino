void setup() {
  // set pins 2 to 6 as outputs
  for (int i = 2; i <= 6; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // turn on the first LED
  digitalWrite(2, HIGH);
  delay(100);
  
  // turn off the first LED and turn on the second LED
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(100);
  
  // turn off the second LED and turn on the third LED
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(100);
  
  // turn off the third LED and turn on the fourth LED
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  
  // turn off the fourth LED and turn on the fifth LED
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(100);
  
  // turn off the fifth LED and turn on the fourth LED
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  
  // turn off the fourth LED and turn on the third LED
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(100);
  
  // turn off the third LED and turn on the second LED
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(100);
  
  // turn off the second LED and turn on the first LED
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(100);
}
