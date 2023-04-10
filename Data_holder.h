#include "enable_pinout.h"
#include "input_char.h"
#include "global_variable.h"
#include <Arduino.h>

#ifndef DATA_HOLDER_H
#define DATA_HOLDER_H
// Class that will store Data and have Setup Function that will take input from user and store in Structure.
class Data_holder
{
  public:
    int port_no = 0;
    struct Data_to_transmit
    {
      unsigned char Rd_var = 0;
      unsigned char Gr_var = 0;
      unsigned char Bl_var = 0;
      unsigned char Rd_var_alt = 0;
      unsigned char Gr_var_alt = 0;
      unsigned char Bl_var_alt = 0;
      unsigned char alt = 0;
      int Bright = 0;
    };
    Data_to_transmit dtp[12][4];
    enable_pinout ep;  // class of actual hardware pin of Teensy 4.1/4.0 that will give the
    void Setup();
};
#endif
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
