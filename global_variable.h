#include <SoftwareSerial.h>
#include <Arduino.h>

#ifndef GLOBAL_VARIABLE_H
#define GLOBAL_VARIABLE_H
extern boolean Setup_flag;
extern boolean Idle_flag;
extern boolean Running_flag;
extern int count; 

// Structure to get stored data in it to transmit
extern unsigned char similar[12];

/////////////////////////////////////////////////////////////////////////// Structure that will take Data into Function ////////////////////////////////////
struct transmit
{
  unsigned char Rd_var;
  unsigned char Gr_var;
  unsigned char Bl_var;
  unsigned char Rd_var_alt;
  unsigned char Gr_var_alt;
  unsigned char Bl_var_alt;
  unsigned char alt;
  int Bright;
};
#endif
