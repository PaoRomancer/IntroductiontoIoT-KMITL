#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix;
uint8_t frame[8][12] = {
  { 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0 },
  { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  { 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 }
};
void setup() {
  matrix.begin();
}
void brokenheart(){ 
frame[2][5] = 1;
frame[3][5] = 1;
frame[3][4] = 1;
frame[4][5] = 1;
frame[4][6] = 1;
frame[5][5] = 1;
frame[5][4] = 1;
frame[6][5] = 1;
frame[7][5] = 1;
} 
void heart(){ 
frame[2][5] = 0;
frame[3][5] = 0;
frame[3][4] = 0;
frame[4][5] = 0;
frame[4][6] = 0;
frame[5][5] = 0;
frame[5][4] = 0;
frame[6][5] = 0;
frame[7][5] = 0;
} 
void loop(){ 
brokenheart(); 
matrix.renderBitmap(frame, 8, 12);  
delay(1000); 
heart(); 
matrix.renderBitmap(frame, 8, 12); 
delay(1000); 
} 