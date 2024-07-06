int led1 = 13;
int led2 = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  digitalWrite(led2, HIGH);
  
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  for (int i = 400; i <= 500; i++) { // Change the upper limit to 500
    digitalWrite(led1, HIGH);
    delay(500 - i); // Adjust delay
    digitalWrite(led1, LOW);
    delay(1500 - i * 3); // Adjust delay

    Serial.print("i: ");
    Serial.println(i);
  }
  
  
  // Stop the loop from running again
  while (true) {
    int a = 499;
    // Keep the LED2 on permanently
    digitalWrite(led1, HIGH);
    delay(500 - a); // Adjust delay
    digitalWrite(led1, LOW);
    delay(1500 - a * 3); // Adjust delay

    Serial.print("i: ");
    Serial.println(a);
  }
}
