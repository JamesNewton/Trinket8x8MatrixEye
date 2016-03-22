# Trinket8x8MatrixEye

An Arduino sketch for the Adafruit.com Trinket (not pro) to drive 1 or 2 8x8 LED matrix displays with an admination and a sprite. The sample provided is an "eye" that blinks and looks around.

Based on:
https://learn.adafruit.com/trinket-slash-gemma-space-invader-pendant?view=all
but using the eye animation from
https://learn.adafruit.com/animating-multiple-led-backpacks?view=all
or more specifically, from:
https://github.com/adafruit/adavoice

Trinket/Gemma + LED matrix backpack.  Plays animated sequence on LED matrix.  Press reset button to display again, or add optional momentary button between pin #1 and +V. Connect backpack LED driver SDA to pin #0, SCL to pin #2. 

The original code does not make use of the Adafruit Backpack library or graphics library to simplify operation (doesn't require any librarys to be installed). The only includes are for Wire.h and avr/power and avr/sleep. I had problems with the wire library not working for the Trinket... it was calling out SDA, SCL, etc... as not defined. <a href="https://forums.adafruit.com/viewtopic.php?f=19&t=70086">As has been reported by others.</a> However, renaming the Arduino folder under My Documents and letting it re-create it seems to have resolved that issue... apparently my libraries were corrupted or out of date.

The code was amended to support a "sprite" which is subtracted from the standard animation frames. The position of the sprite can be adjusted by and x and y variable as it is loaded. This allows it to be moved around on the "screen". In this case, it's used to make the pupil of the eye, but it could be used for any sort of sprite animation. The main animation is triggered randomly and consists of some number of frames.

A define sets the number of animation cycles between a min and max, randomly selected. To defeat that, and simply run the animation forever, the min value can be set to zero. Otherwise, the animation will stop on frame 7 (in this case, when the eye is closed) but that can easily be changed. It will start again from that point when pin #1 is pulled high. 

Then default result is a pair of eyes, which "wake up", looking around and blinking randomly, then "close" and the unit goes back to sleep.

See the <a href="https://learn.adafruit.com/trinket-slash-gemma-space-invader-pendant?view=all
">Adafruit tutorial for construction details</a>, and <a href="https://www.youtube.com/watch?v=iAIfBcEAuHc">this video for how to solder the backpacks</a>. 

