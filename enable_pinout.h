/////////////////////////////////////////////////////////////////////////// Structure that will store Hardware Pins ////////////////////////////////////
// Class will give Hardware Pins

#ifndef ENABLE_PINOUT_H
#define ENABLE_PINOUT_H
class enable_pinout
{
  public:
    int hardware_pins[12] = {4, 5, 6, 7, 11, 10, 9, 8, 17, 18, 19, 20};
    int pwm_pin[4] = {2, 3, 0, 1};
    int enable_pin(int access_no);
    int pwm_trans(int pwm_acess);
};
#endif
 
