void setup() {
  Serial.begin(115200);
}

void loop() {
    int  Temp  = analogRead(A0);
    Serial.println(Temp); 
  

}
