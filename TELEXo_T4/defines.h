/*
 * TELEXo Eurorack Module
 * (c) 2016-2018 Brendon Cassidy
 * MIT License
 */

 
#ifndef Defines_h
#define Defines_h

// debug flag turns on serial debugging over USB
// this can drastically affect performance of the DAC
// depending on where you output to serial - so take care when using it
// #define DEBUG 1

// identify if the teensy 4.x is being used (TURBO) or it is a 3.2 (BASIC)
//#if defined(__MK66FX1M0__)
#if defined(__IMXRT1062__) 
#define TURBO 1
#else
#define BASIC 1
#endif

// logging values
#define WRITERATE 50.
#define LEDINTERVAL 100
#define LOGINTERVAL 10000

// sampling rate and LED rate values  //increased fro teensy 4.0
#ifdef TURBO
#define SAMPLINGRATE 100000 //50000 //25000    //need to keep these multiples of the original 25k, or osc tuning is off
#define SAMPLINGRATEDIV2 50000 //25000 //12500
#define KRATE 100 //50 //25
// ulstep for 20k (for polyblep threshold)
#define FQ20K 3435973
#else
#define SAMPLINGRATE 15625
#define SAMPLINGRATEDIV2 7812
#define KRATE 15.625
#endif

#define LEDRATE 50

#endif
