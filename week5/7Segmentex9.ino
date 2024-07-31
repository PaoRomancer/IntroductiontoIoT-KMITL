// 4 digit 7 segment display 
int segmentA = A0;  
int segmentB = A1;  
int segmentC = A2;  
int segmentD = 2;   
int segmentE = 4;  
int segmentF = 7;  
int segmentG = 8;  
int segmentDP = 13; 
//new
int digit1 = 5;  
int digit2 = 6;  //green
int digit3 = 9;   //
int digit4 = 10;  
 
void setup()  
{                 
  pinMode(segmentA, OUTPUT); 
  pinMode(segmentB, OUTPUT); 
  pinMode(segmentC, OUTPUT); 
  pinMode(segmentD, OUTPUT); 
  pinMode(segmentE, OUTPUT); 
  pinMode(segmentF, OUTPUT); 
  pinMode(segmentG, OUTPUT); 
  pinMode(segmentDP, OUTPUT);
  //new
  pinMode(digit1, OUTPUT); 
  pinMode(digit2, OUTPUT); 
  pinMode(digit3, OUTPUT); 
  pinMode(digit4, OUTPUT); 
} 
 
void loop()  
{     
    displayNumber(); 
} 
 
void displayNumber()  
{ 
  for(int digit = 1 ; digit <= 4 ; digit++)  
  {  
    switch(digit)                          
    { 
    case 1: 
      digitalWrite(digit1, HIGH); 
      break; 
    case 2: 
      digitalWrite(digit2, HIGH); 
      break; 
    case 3: 
      digitalWrite(digit3, HIGH); 
      break; 
    case 4: 
      digitalWrite(digit4, HIGH); 
      break; 
    }  
    displaySegment(digit);    // แสดงผลบน 7-Segment ขนาด 1 หลัก

    delay(500);
      //Turn off all digits 
    digitalWrite(digit1, LOW); 
    digitalWrite(digit2, LOW); 
    digitalWrite(digit3, LOW); 
    digitalWrite(digit4, LOW); 
  }
    
} 
 
void displaySegment(int numberToDisplay)  
{ 
  switch (numberToDisplay) 
    {
    case 0:      // แสดงผลเลข 0 
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, HIGH); 
      digitalWrite(segmentE, HIGH); 
      digitalWrite(segmentF, HIGH); 
      digitalWrite(segmentG, LOW); 
      break; 

    case 1:      // แสดงผลเลข 1 
      digitalWrite(segmentA, LOW); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, LOW); 
      digitalWrite(segmentE, LOW); 
      digitalWrite(segmentF, LOW); 
      digitalWrite(segmentG, LOW); 
      break; 
   
    case 2:      // แสดงผลเลข 2 
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, LOW); 
      digitalWrite(segmentD, HIGH); 
      digitalWrite(segmentE, HIGH); 
      digitalWrite(segmentF, LOW); 
      digitalWrite(segmentG, HIGH); 
      break; 
   
    case 3:      // แสดงผลเลข 3 
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, HIGH); 
      digitalWrite(segmentE, LOW); 
      digitalWrite(segmentF, LOW); 
      digitalWrite(segmentG, HIGH); 
      break; 

    case 4:      // แสดงผลเลข 4 
      digitalWrite(segmentA, LOW); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, LOW); 
      digitalWrite(segmentE, LOW); 
      digitalWrite(segmentF, HIGH); 
      digitalWrite(segmentG, HIGH); 
      break;  
    case 5:      // แสดงผลเลข 5 
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, LOW); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, HIGH); 
      digitalWrite(segmentE, LOW); 
      digitalWrite(segmentF, HIGH); 
      digitalWrite(segmentG, HIGH); 
      break;

      case 6:      // แสดงผลเลข 6 
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, LOW); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, HIGH); 
      digitalWrite(segmentE, HIGH); 
      digitalWrite(segmentF, HIGH); 
      digitalWrite(segmentG, HIGH); 
      break;

      case 7:      // แสดงผลเลข 7
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, LOW); 
      digitalWrite(segmentE, LOW); 
      digitalWrite(segmentF, LOW); 
      digitalWrite(segmentG, LOW); 
      break;

      case 8:      // แสดงผลเลข 8
      digitalWrite(segmentA, HIGH); 
      digitalWrite(segmentB, HIGH); 
      digitalWrite(segmentC, HIGH); 
      digitalWrite(segmentD, HIGH); 
      digitalWrite(segmentE, HIGH); 
      digitalWrite(segmentF, HIGH); 
      digitalWrite(segmentG, HIGH); 
      break;

      case 9:      // แสดงผลเลข 9
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