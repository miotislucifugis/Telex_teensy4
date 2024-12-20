# Telex_teensy4
An update of bpcmusic's Telex Teletype Expanders to make them compatable with Teensy 4.x devices: Teensy 4.0 and 4.1.    The original Teensy 3 version can be found here: https://github.com/bpcmusic/telex

Uses the same/original PCB - No hardware changes needed!

## Compiling on Arduino IDE


You will need to install the Teensy4_I2C library:   https://github.com/Richard-Gemmell/teensy4_i2c 

...and add teensy board definitions to the arduino IDE:    https://www.pjrc.com/teensy/td_download.html

Set CPU speed to 396mhz (or 150mhz) in "Board Settings" when you compile in arduino.   (Ive found that faster CPU speeds cause problems,and will not work at all at 600mhz)

Alternately, you could just flash the pre-compiled .hex file that (in respective TXO and TXI folders) using Ty Uploader (or other utility): https://github.com/Koromix/tytools

## TXO = TXO+ 
With the increased speed, power, and available memory of the teensy4.0, it is no problem to run the enhanced features of Tx0+ (previously available by using a teensy 3.6, called "TURBO" mode in the code.) TXO+ offers 326 Oscillator Waveforms (vs 45 w/ txo) and increased interpolation and sampling rate for the oscillators - increased to 25k (from 12.5k) for a signifigant reduction in alaising.  Txo+ is already enabled in the code.

## Experimental: 
if you like to tinker, you can try raising the sampling frequency for the TXO oscillators.  Higher sampling rates results in less digital aliasing.  this can be observed by looking at the sine wave on a scope.  Keep the rate in multiples of the original 25k or else tuning will be off.  Ive found that at 100k, while there is practically no aliasing on sine waves throughout the audio range, there is some tuning instability when multiple oscillators are running simultaneously.    50k seems pretty stable.   (*note: these changes are pretty hacky- the correct way to improve the code for teensy 4 would probably be to do it in oscillator.cpp, but that is a little beyond my abilities as a coder.  As a crude hack tho', this seems to work)   
Changes are made in defines.h

    // sampling rate and LED rate values  //increased fro teensy 4.0
    #ifdef TURBO
    #define SAMPLINGRATE 50000  //25000    //need to keep these multiples of the original 25k, or osc tuning is off
    #define SAMPLINGRATEDIV2 25000 //12500
    #define KRATE 50 //25


