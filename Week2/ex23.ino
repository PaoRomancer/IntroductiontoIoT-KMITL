int led9 = 9;
int led10 = 10;
int led11 = 11;

void setup() {
  Serial.begin(115200);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
}

void loop() {
    int  Temp  = analogRead(A0);
    Serial.println(Temp);

  if (Temp>800) {
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  }

  else if (Temp>750) {
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  }

  else if (Temp>650) {
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  }

  else {
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  }

  

}
