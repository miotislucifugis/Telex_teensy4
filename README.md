# Telex_teensy4
An update of bpcmusic's Telex Teletype Expanders to make them compatable with Teensy 4.x devices.     The original version can be found here: https://github.com/bpcmusic/telex

Uses the original PCB - No hardware changes needed.

You will need to install the Teensy4_I2C library:   https://github.com/Richard-Gemmell/teensy4_i2c 


Set CPU speed to 396mhz  and USB type as Serial when you compile in arduino

With increased speed and power of the teensy4.0, it is no problem to run the enhanced features of Tx0+ (aka TURBO): 326 Waveforms and increased interpolation and sampling rate for the oscillators.   In fact, I increased the waveform sampling to 100k (from 25k) for a signifigant reduction in alaising. Sine waves are very very clean on the scope throughout the audio range. (Alisiang still exists on the some of the "exotic" waveforms, but all the basic shapesare improved.)  
