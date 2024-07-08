int led9 = 9;
int led10 = 10;

void setup() {
  Serial.begin(115200);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() {
    int  Temp  = analogRead(A0);
    Serial.println(Temp); 

  if (Temp<500) {
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  }

  else {
  digitalWrite(led10, HIGH);
  digitalWrite(led9, LOW); 
  }
 
  

}
