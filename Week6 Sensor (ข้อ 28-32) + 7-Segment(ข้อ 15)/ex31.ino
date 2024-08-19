#define  THERMISTOR  A3                            
#define  R0  10000                                      
#define  B    3435                                        
#define  R1  10000                                      
float T0 = 25;
float R;
float T;
float C;


void setup()  { 
T0 = T0 + 273.15;                                     
  Serial.begin(9600);
} 

void loop() { 
  int samples;
  samples = analogRead(THERMISTOR);         
  Serial.print("Analog reading : ");                  
  Serial.println(samples);

  R = R1 *(samples / (1023.0 - samples));
  Serial.print("ความต้านทานเทอร์มิสเตอร์ R : ");  // print out the value
  Serial.println(R);
  T = 1/((1.0 / T0) + (1.0 / B) * log(R / R0)); /*ข้อ31 edit อุณหภูมิที่ได้นี ้จะเป็น  kelvin ให้แปลงค่าเป็น  Celsius  
และพิมพ์ผลที่ได้ออกไปทาง Serial Monitor*/ 
  C = T - 273;
  Serial.print("อุณหภูมิ c :");
  Serial.println(C);


  delay(1000);  // Wait for next sample                                             
} 
