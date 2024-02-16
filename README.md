# Telex_teensy4
An update of bpcmusic's Telex Teletype Expanders to make them compatable with Teensy 4.x devices.     The original version can be found here: https://github.com/bpcmusic/telex

Uses the original PCB - No hardware changes needed.

You will need to install the Teensy4_I2C library:   https://github.com/Richard-Gemmell/teensy4_i2c 


Set CPU speed to 150mhz, when you compile in arduino.   (Ive found that faster CPU speeds cause problems, unfortunately. It seems like it experiences brown outs and resets- I think at higher cpu speeds the teensy is drawing more power than the txo's 5v regulator can provide.)

TXO :  With the increased speed, power, and available memory of the teensy4.0, it is no problem to run the enhanced features of Tx0+ (previously available by using a teensy 3.6, called "TURBO" mode in the code.) TXO+ offers 326 Oscillator Waveforms (vs 45 w/ txo) and increased interpolation and sampling rate for the oscillators - increased to 25k (from 12.5k) for a signifigant reduction in alaising. 


TXI : firmware has been updated, but is currently untested, as I lack a txi.  The only changes made were changing the I2c Library in the main sketch and the txhelper.ccp and txhelper.h tabs.    It compiles and should work.    
