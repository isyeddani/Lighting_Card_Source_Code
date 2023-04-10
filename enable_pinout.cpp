
#include "enable_pinout.h"
int enable_pinout::enable_pin(int access_no)
{
  return hardware_pins [access_no - 1];
}

int enable_pinout::pwm_trans(int pwm_acess)
{
  return pwm_pin [pwm_acess - 1];
}
