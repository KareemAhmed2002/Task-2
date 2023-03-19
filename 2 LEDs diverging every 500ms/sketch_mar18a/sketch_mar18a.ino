void setup() {
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // turn on LED 1 and turn off LED 2
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500);
  
  
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
}
