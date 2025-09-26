const int led[4]={8,9,10,11}; // D4, D3, D2, D1

void setup() {
  for(int i=0;i<4;i++) {
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i], LOW); // Ensure all are OFF initially
  }
}

void loop() {
  // Turn ON sequentially
  for (int i=0;i<4;i++){
    digitalWrite(led[i], HIGH);
    delay(100); // Wait 100ms
  }
  
  // Turn OFF sequentially
  for (int i=0;i<4;i++){
    digitalWrite(led[i], LOW);
    delay(100); // Wait 100ms
  }

  // Optional: Add a longer pause here before the sequence repeats
  // delay(500); 
}