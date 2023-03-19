void setup() {
 
  for (int i = 2; i <= 6; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  
  digitalWrite(2, HIGH);
  delay(100);
  
 
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(100);
  
  
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(100);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  
  
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(100);
  
  
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  
  
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(100);
  
  
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(100);
  
  
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(100);
}
