#include <Control_Surface.h>

// Interface type to use
USBMIDI_Interface midi;

// The note numbers corresponding to the buttons in the matrix
const AddressMatrix<4, 4> addresses = {{
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12},
  {13, 14, 15, 16},
  
}};
 
NoteButtonMatrix<4, 4> buttonmatrix = {
  {15, 14, 16, 10}, // row pins
  {7, 6, 5, 4},    // column pins
  addresses,    // address matrix
  CHANNEL_1,    // channel and cable number
};

// Define pots {Pin number, Controller number}
CCPotentiometer potentiometers[] = {
  {A0, 0x10},
  {A1, 0x11},
  {A2, 0x12},
  {A3, 0x13},
  {A8, 0x14},
  {A9, 0x15},
  
};

// Initialise control surface
void setup() {
  Control_Surface.begin();
}

// Start loop
void loop() {
  Control_Surface.loop();
}
