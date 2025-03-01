#include "pitches.h"

//int melody[] = {
//  NOTE_E4,
//  NOTE_D4,
//  NOTE_C4,
//  NOTE_D4,
//  NOTE_E4,
//  NOTE_E4,
//  NOTE_E4,  // delay
//  NOTE_D4,
//  NOTE_D4,
//  NOTE_D4,  // delay
//  NOTE_E4,
//  NOTE_G4,
//  NOTE_G4,  // delay
//  NOTE_E4,
//  NOTE_D4,
//  NOTE_C4,
//  NOTE_D4,
//  NOTE_E4,
//  NOTE_E4,
//  NOTE_E4,
//  NOTE_E4,
//  NOTE_D4,
//  NOTE_D4,
//  NOTE_E4,
//  NOTE_D4,
//  NOTE_C4
//};
//int delays[] = {
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  1000,
//  500,
//  500,
//  1000, 
//  500,
//  500,
//  1000, 
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500,
//  500
//};

int melody[26][2] = {
  {NOTE_E4, 500},
  {NOTE_D4, 500},
  {NOTE_C4, 500},
  {NOTE_D4, 500},
  {NOTE_E4, 500},
  {NOTE_E4, 500},
  {NOTE_E4, 1000}, // delay
  {NOTE_D4, 500},
  {NOTE_D4, 500},
  {NOTE_D4, 1000}, // delay
  {NOTE_E4, 500},
  {NOTE_G4, 500},
  {NOTE_G4, 1000}, // delay
  {NOTE_E4, 500},
  {NOTE_D4, 500},
  {NOTE_C4, 500},
  {NOTE_D4, 500},
  {NOTE_E4, 500},
  {NOTE_E4, 500},
  {NOTE_E4, 500},
  {NOTE_E4, 500},
  {NOTE_D4, 500},
  {NOTE_D4, 500},
  {NOTE_E4, 500},
  {NOTE_D4, 500},
  {NOTE_C4, 500}
};

int duration = 500;
int delayDur = 1000;
int tonePin = 8;

void setup() {

}

void loop() {
  // sizeof() returns the total number of bytes, not the elements in the lsi

  for (int thisNote = 0; thisNote < ( sizeof(melody)/sizeof(melody[0]) ); thisNote++) {
    tone(tonePin, melody[thisNote][0], duration);

    delay(melody[thisNote][1]);
  }

  delay(delayDur);
}


