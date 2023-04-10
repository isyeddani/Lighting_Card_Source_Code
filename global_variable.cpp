#include <SoftwareSerial.h>
#include <Arduino.h>
#include "global_variable.h"

boolean Setup_flag = false;
boolean Idle_flag = false;
boolean Running_flag = false;

// Structure to get stored data in it to transmit
unsigned char similar[12] = {0};

int count =0;

/////////////////////////////////////////////////////////////////////////// Structure that will take Data into Function ////////////////////////////////////
