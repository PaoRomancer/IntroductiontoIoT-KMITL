//โจทย์ แก้ไขโปรแกรมให้ LED กระพริบเป็นความถี่ 10Hz
int led = 13;                                  

void setup() {                 
    pinMode(led, OUTPUT);               
} 

void loop() { 
    digitalWrite(led, HIGH);                
    delay(50);                               
    digitalWrite(led, LOW);                
    delay(50);                              
}
