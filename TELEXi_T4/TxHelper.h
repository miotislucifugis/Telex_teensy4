/*
 * TELEXi Eurorack Module
 * (c) 2016, 2017 Brendon Cassidy
 * MIT License
 */
 
#ifndef TxHelper_h
#define TxHelper_h

// i2c
#include <i2c_driver_wire.h>

#include "Arduino.h"

struct TxResponse {
  byte Command;
  byte Output;
  int Value;
};

struct TxIO {
  short Port;
  short Mode;
};

class TxHelper
{
  public:

    static TxResponse Parse(size_t len);
    static TxIO DecodeIO(int io);

  protected:
    
  private:
 

};

#endif

