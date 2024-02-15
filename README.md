# Telex_teensy4
An update of bpcmusic's Telex Teletype Expanders to make them compatable with Teensy 4.x devices.     The original version can be found here: https://github.com/bpcmusic/telex

Uses the original PCB - No hardware changes needed.

You will need to install the Teensy4_I2C library:   https://github.com/Richard-Gemmell/teensy4_i2c 


Set CPU speed to 150mhz, optimize to "fastest" and USB type as Serial when you compile in arduino.   Ive found that faster CPU speeds cause problems, unfortunately. 

With the increased speed and power of the teensy4.0, it is no problem to run the enhanced features of Tx0+ (previously available by using a teensy 3.6, aka TURBO): 326 Oscillator Waveforms and increased interpolation and sampling rate for the oscillators.   Waveform sampling is increased to 100k (from the original 25k for txo+ , 12.5k for txo) for a signifigant reduction in alaising. Not sure if there are negative effects of the increased sample rate- I just increased it as an experiment and it seemed to work with no apparent negative effects, but you can change it back to  25k in defines.h.  At 100k sine waves are very very clean throughout the entire audio range.

    #ifdef TURBO
    #define SAMPLINGRATE 100000 //50000 //25000    //need to keep these multiples of the original 25k, or osc tuning is off
    #define SAMPLINGRATEDIV2 50000 //25000 //12500
    #define KRATE 100 //50 //25
