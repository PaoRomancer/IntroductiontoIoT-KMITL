//23
int UV = 13; //blue


void setup() {
  Serial.begin(115200);
  pinMode(UV, OUTPUT);
}

void loop() {
  int Temp = analogRead(A1);
  Serial.println(Temp);
  if (Temp>100) {
    digitalWrite(UV, HIGH); //white

  } 
  else (Temp>10) {
    digitalWrite(UV, LOW);

}
