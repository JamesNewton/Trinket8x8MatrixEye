// Animation data for Trinket/Gemma + LED matrix backpack jewelry.
// Edit this file to change the animation; it's unlikely you'll need
// to edit the source code.

#define MIN_REPS 3 // Number of times to repeat the animation loop (0-255)
              // set to zero to keep it running forever.
#define MAX_REPS 12 // Maximum number of times to repeat the animation loop (MIN_REPS-255)
#define FRAME_DELAY 4

  // Animation bitmaps.  Each frame of animation MUST contain
  // 8 lines of graphics data (there is no error checking for
  // length).  Each line should be prefixed with the letter 'B',
  // followed by exactly 8 binary digits (0 or 1), no more,
  // no less (again, no error checking).  '0' represents an
  // 'off' pixel, '1' an 'on' pixel.  End line with a comma.

  // The matrices are installed
  // in the mask at a 45 degree angle...
  // you can edit these bitmaps if you opt
  // for a rectilinear arrangement.


#define SPRITE_LEFT 2   //how far left should the sprite move?
#define SPRITE_RIGHT  5 //how far right should the sprite move?
#define SPRITE_UP 2     //how far up should it move? between 0 and this

const uint8_t PROGMEM spritemap[]={
//  B11000000, //small pupil
//  B11000000,
//  B00000000,
//  B00000000,
//  B00000000,
//  B00000000,
//  B00000000,
//  B00000000
//  B01000000, //medium pupil
//  B11100000,
//  B01000000,
//  B00000000,
//  B00000000,
//  B00000000,
//  B00000000,
//  B00000000
  B11100000, //large pupil
  B11100000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
  };

const uint8_t PROGMEM anim[] = {

    B11111100,         // Fully open eye
    B11111110,         // The eye matrices are installed
    B11111111,         // in the mask at a 45 degree angle...
    B11111111,         // you can edit these bitmaps if you opt
    B11111111,         // for a rectilinear arrangement.
    B11111111,
    B01111111,
    B00111111,
    B11110000,  //1
    B11111100,
    B11111110,
    B11111110,
    B11111111,
    B11111111,
    B01111111,
    B00111111,
    B11100000,  //2
    B11111000,
    B11111100,
    B11111110,
    B11111110,
    B01111111,
    B00111111,
    B00011111,
    B11000000,  //3
    B11110000,
    B11111000,
    B11111100,
    B11111110,
    B01111110,
    B00111111,
    B00011111,
    B10000000,  //4
    B11100000,
    B11111000,
    B11111100,
    B01111100,
    B01111110,
    B00111110,
    B00001111,
    B10000000,  //5
    B11000000,
    B11100000,
    B11110000,
    B01111000,
    B01111100,
    B00111110,
    B00001111,
    B10000000,  //6
    B10000000,
    B11000000,
    B01000000,
    B01100000,
    B00110000,
    B00011100,
    B00000111,
    B10000000,  // Fully closed eye
    B10000000,
    B10000000,
    B01000000,
    B01000000,
    B00100000,
    B00011000,
    B00000111,
    B10000000,  //6
    B10000000,
    B11000000,
    B01000000,
    B01100000,
    B00110000,
    B00011100,
    B00000111,
    B10000000,  //5
    B11000000,
    B11100000,
    B11110000,
    B01111000,
    B01111100,
    B00111110,
    B00001111,
    B10000000,  //4
    B11100000,
    B11111000,
    B11111100,
    B01111100,
    B01111110,
    B00111110,
    B00001111,
    B11000000,  //3
    B11110000,
    B11111000,
    B11111100,
    B11111110,
    B01111110,
    B00111111,
    B00011111,
    B11100000,  //2
    B11111000,
    B11111100,
    B11111110,
    B11111110,
    B01111111,
    B00111111,
    B00011111,
    B11110000,  //1
    B11111100,
    B11111110,
    B11111110,
    B11111111,
    B11111111,
    B01111111,
    B00111111,
  };


