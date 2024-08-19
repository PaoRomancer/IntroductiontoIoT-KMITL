#define THERMISTOR A3
#define R0 10000
#define B 3435
#define R1 10000
float T0 = 25;
float R;
float T;
float C;
int count = 0;
float sum = 0;
//4 digit 7 segment display
int segmentA = A0;   //11
int segmentB = A1;   //7
int segmentC = A2;   //4
int segmentD = 2;    //2
int segmentE = 4;    //1
int segmentF = 7;    //10
int segmentG = 8;    //5
int segmentDP = 13;  //3
int digit1 = 5;
int digit2 = 6;
int digit3 = 9;
int digit4 = 10;
int num[4];
float Avg = 25;

void setup() {
  T0 = T0 + 273.15;
  Serial.begin(9600);
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(segmentDP, OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
}
void loop() {
  int samples;
  samples = analogRead(THERMISTOR);
  R = R1 * (samples / (1023.0 - samples));
  T = 1.0 / ((1.0 / T0) + (1.0 / B) * (log(R / R0)));
  C = T - 273.15;
 

  Avg = (Avg + C) / 2;
  int x = Avg * 100;
  num[3] = (x % 10) / 1;
  num[2] = (x % 100) / 10;
  num[1] = (x % 1000) / 100;
  num[0] = (x % 10000) / 1000;

  displayNumber();
}
void displayNumber() {
  for (int digit = 1; digit <= 4; digit++) {
    displaySegment(num[digit - 1]);  // แสดงผลบน 7-Segment ขนาด 1 หลัก
    switch (digit) {
      case 1:
        digitalWrite(digit1, HIGH);
        digitalWrite(segmentDP, LOW);
        break;
      case 2:
        digitalWrite(digit2, HIGH);
        digitalWrite(segmentDP, HIGH);
        break;
      case 3:
        digitalWrite(digit3, HIGH);
        digitalWrite(segmentDP, LOW);
        break;
      case 4:
        digitalWrite(digit4, HIGH);
        digitalWrite(segmentDP, LOW);
        break;
    }
    delay(1);

    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
  }
}
void displaySegment(int numberToDisplay) {
  switch (numberToDisplay) {

    case 0:  // แสดงผลเลข 0
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, LOW);
      break;
    case 1:  // แสดงผลเลข 1
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

    case 2:  // แสดงผลเลข 2
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, HIGH);
      break;

    case 3:  // แสดงผลเลข 3
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, HIGH);
      break;
    case 4:  // แสดงผลเลข 4
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;
    case 5:  // แสดงผลเลข 5
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;

    case 6:  // แสดงผลเลข
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;

    case 7:  // แสดงผลเลข 7
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

    case 8:  // แสดงผลเลข 8
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;

    case 9:  // แสดงผลเลข 9
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;
  }
}