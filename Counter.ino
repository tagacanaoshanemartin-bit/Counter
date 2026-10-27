// Pins
int IR = 36; // ir sensor pin
int ones[] = {39,34,35,32,33,25,26}; // 7 segment pins (A-G)
int tens[] = {19,18,5,17,16,4,0}; 

// Initialize to zero
int objCount = 0; // total obj count
bool objDetected = false;

// include after variables have been declared 
#include "decoder.h"

void setup() {
  pinMode(IR, INPUT); // set ir pin mode

  // set seven-segment pin mode
  for(int i=0; i<sizeof(ones)/sizeof(ones[0]); i++) {
    pinMode(ones[i], OUTPUT);
    pinMode(tens[i], OUTPUT);
  }

  Serial.begin(9600); // baud rate
  
  decoder(objCount);
}

void loop() {
  
  objDetected = digitalRead(IR); // get input from ir pin

  // i think this is active low
  if(!objDetected) {
    if(objCount < 99) {
      objCount++; // increment
    } else {
      objCount = 0; // reset to zero
    }

    decoder(objCount);
  } 
  
  delay(500);
} // loop end
