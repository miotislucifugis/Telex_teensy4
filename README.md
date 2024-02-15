# Telex_teensy4
An update of bpcmusic's Telex Teletype Expanders to make them compatable with Teensy 4.x devices.     The original version can be found here: https://github.com/bpcmusic/telex

Uses the original PCB - No hardware changes needed.

You will need to install the Teensy4_I2C library:   https://github.com/Richard-Gemmell/teensy4_i2c 


Set CPU speed to 150mhz, optimize to "fastest" and USB type as Serial when you compile in arduino.   Faster CPU speed cause problems, Ive found. 

With the increased speed and power of the teensy4.0, it is no problem to run the enhanced features of Tx0+ (previously available by using a teensy 3.6, aka TURBO): 326 Oscillator Waveforms and increased interpolation and sampling rate for the oscillators.   Waveform sampling is increased to 50k (from the original txo+ value of 25k, 12.5 for txo) for a signifigant reduction in alaising. Not sure if there are negative effects of the increased sample rate- I just increased it as an experiment and it seemed to work, but you can change it back to  25k in defines.h

    #ifdef TURBO
    #define SAMPLINGRATE 50000 //25000    //need to keep these multiples of the original 25k, or osc tuning is off
    #define SAMPLINGRATEDIV2 25000 //12500
    #define KRATE 50 //25
