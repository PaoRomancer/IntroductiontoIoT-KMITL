//23
int led9 = 9; //blue
int led10 =10; //green
int led11 =11; //red

void setup() {
  Serial.begin(115200);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
}

void loop() {
  int Temp = analogRead(A0);
  Serial.println(Temp);
  if (Temp>700) {
    digitalWrite(led9, HIGH); //white
    digitalWrite(led10, HIGH);
    digitalWrite(led11, HIGH);
  } 
  else if (Temp>600) {
    digitalWrite(led9, LOW);
    digitalWrite(led10, HIGH); //yellow
    digitalWrite(led11, HIGH);
  }
  else if (Temp>500) {
    digitalWrite(led9, HIGH); //purple

    digitalWrite(led10, LOW);
    digitalWrite(led11, HIGH);
  }
  else if (Temp>400) {
    digitalWrite(led9, HIGH); //ฟ้า
    digitalWrite(led10, HIGH); 
    digitalWrite(led11, LOW);
  }
  else if (Temp>300) {
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, HIGH); //red
  }
  else if (Temp>200) {
    digitalWrite(led9, LOW);
    digitalWrite(led10, HIGH); //green
    digitalWrite(led11, LOW);
  }
  else {
    digitalWrite(led9, HIGH); //blue
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
  }
}
