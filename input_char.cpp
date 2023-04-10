#include "input_char.h"
#include <SoftwareSerial.h>
#include <Arduino.h>

unsigned char input_char()
{
  while (!Serial.available() > 0) {} //wait for an input
  unsigned char Read = Serial.parseInt();
  return Read;
}
