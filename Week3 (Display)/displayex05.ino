#include "Arduino_LED_Matrix.h" 
ArduinoLEDMatrix matrix; 
void setup() { 
matrix.begin(); 
} 

const uint32_t KMITL[] = {
		0xa8acdaaa,
		0xaa8a0001,
		0xd009009c
};
const uint32_t IOT[] = {
		0x77725,
		0x22522522,
		0x52772000
};
void loop(){ 
matrix.loadFrame(KMITL); 
delay(500); 
matrix.loadFrame(IOT); 
delay(500); 
} 