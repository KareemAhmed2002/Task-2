void setup() {
  
  for (int i = 1; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
 
  for (int i = 1; i <= 6; i++) {
    digitalWrite(i, HIGH);  
    delay(500);             
    digitalWrite(i, LOW);   
  }
  
 
  for (int i = 7; i >= 1; i--) {
    digitalWrite(i, HIGH);  // turn LED on
    delay(500);             // wait 500ms
    digitalWrite(i, LOW);   // turn LED off
  }
}
