void setup() {
  // set pins 2 and 3 as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // turn on LED 1 and turn off LED 2
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500);
  
  // turn off LED 1 and turn on LED 2
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  
  // turn off both LEDs
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
}
