#include <SoftwareSerial.h>
#include <Arduino.h>
#include "global_variable.h"
#include "transmit.h"
//////////////////////////////////////////////////////// Transmit Function ///////////////////////////////////////////////////////
void transmit(struct transmit trf , int pin)
{
  if (trf.alt == 0)
  {
    int Rtemp = trf.Rd_var;
    int Gtemp = trf.Gr_var;
    int Btemp = trf.Bl_var;
    digitalWrite(pin, LOW);
    delayMicroseconds(41);
    digitalWrite(pin, HIGH); //Break
    delayNanoseconds(6500);// 6.6usec
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 256; j++)
      {
        digitalWrite(pin, LOW); // markafterbreak
        delayMicroseconds(1);
        switch (Rtemp)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(1970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(7950);
            break;
        }
        ////////// GREEN START //////////////
        switch (Gtemp)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause itsGREEN
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(2970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(1970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7950);
            break;
        }
        /////////// GREEN END //////////////

        ////////// BLUE STARTS //////////////
        switch (Btemp)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6920);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(920);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5920);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1920);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4940);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(1940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(5940);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7950);
            break;
        }
        ///////////// BLUE END //////////////////
        if (j < 255)
        {
          digitalWrite(pin, HIGH); //Stop
          delayMicroseconds(5);
        }
        else
        {
          digitalWrite(pin, HIGH); //Stop
          delayMicroseconds(4);
        }
      }
      if (i == 0)
      {
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(16970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(22970);
        digitalWrite(pin, HIGH); //Break
        delayNanoseconds(6500);// 6.6usec
      }
    }
    int bright_var = trf.Bright;
    switch (bright_var)
    {
      case 1:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(20970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 2:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayMicroseconds(17);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayMicroseconds(1);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayMicroseconds(3);
        digitalWrite(pin, HIGH);
        delayMicroseconds(1);
        digitalWrite(pin, LOW);
        delayMicroseconds(19);
        digitalWrite(pin, HIGH);
        break;
      case 3:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayMicroseconds(18);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayMicroseconds(1);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayMicroseconds(2);
        digitalWrite(pin, HIGH);
        delayMicroseconds(1);
        digitalWrite(pin, LOW);
        delayMicroseconds(19);
        digitalWrite(pin, HIGH);
        break;
      case 4:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayMicroseconds(17);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayMicroseconds(2);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayMicroseconds(2);
        digitalWrite(pin, HIGH);
        delayMicroseconds(1);
        digitalWrite(pin, LOW);
        delayMicroseconds(19);
        digitalWrite(pin, HIGH);
        break;
      case 5:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 6:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(16970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW);
        delayNanoseconds(970);
        digitalWrite(pin, HIGH);
        delayNanoseconds(970);
        digitalWrite(pin, LOW);
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 7:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(17970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(1970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH);
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 8:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(16970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(2970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH);
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(19000);
        digitalWrite(pin, HIGH);
        break;
    }
  }
  if (trf.alt == 1)
  {
    int Rtemp = trf.Rd_var;
    int Gtemp = trf.Gr_var;
    int Btemp = trf.Bl_var;
    int Rtemp_alt = trf.Rd_var_alt;
    int Gtemp_alt = trf.Gr_var_alt;
    int Btemp_alt = trf.Bl_var_alt;
    digitalWrite(pin, LOW);
    delayMicroseconds(41);
    digitalWrite(pin, HIGH); //Break
    delayNanoseconds(6500);// 6.6usec
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 128; j++)
      {
        digitalWrite(pin, LOW); // markafterbreak
        delayMicroseconds(1);
        switch (Rtemp)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(1970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(7950);
            break;
        }
        ////////// GREEN START //////////////
        switch (Gtemp)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause itsGREEN
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(2970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(1970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7950);
            break;
        }
        /////////// GREEN END //////////////

        ////////// BLUE STARTS //////////////
        switch (Btemp)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6920);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(920);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5920);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1920);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4940);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(1940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(5940);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7950);
            break;
        }
        ///////////// BLUE END //////////////////
        digitalWrite(pin, HIGH); //Stop
        delayMicroseconds(4);

        //////////////////////////////////////////////////////
        /////////////////// Alternate Start //////////////////
        //////////////////////////////////////////////////////
        switch (Rtemp_alt)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(1970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(7950);
            break;
        }

        ////////// GREEN START //////////////
        switch (Gtemp_alt) {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause itsGREEN
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(2970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(1970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7950);
            break;
        }
        /////////// GREEN END //////////////

        ////////// BLUE STARTS //////////////
        switch (Btemp_alt)
        {
          case 0:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6920);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(920);
            break;
          case 2:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5920);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1920);
            break;
          case 3:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4970);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            break;
          case 5:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4940);
            break;
          case 6:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(1940);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(5940);
            break;
          case 7:
            digitalWrite(pin, LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(990);
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(pin, HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7950);
            break;
        }
        ///////////// BLUE END //////////////////
        if (j < 128)
        {
          digitalWrite(pin, HIGH); //Stop
          delayMicroseconds(5);
        }
        else
        {
          digitalWrite(pin, HIGH); //Stop
          delayMicroseconds(4);
        }
      }
      if (i == 0)
      {
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(16970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(22970);
        digitalWrite(pin, HIGH); //Break
        delayNanoseconds(6500);// 6.6usec
      }
    }
    int bright_var = trf.Bright;
    switch (bright_var)
    {
      case 1:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(20970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 2:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayMicroseconds(17);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayMicroseconds(1);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayMicroseconds(3);
        digitalWrite(pin, HIGH);
        delayMicroseconds(1);
        digitalWrite(pin, LOW);
        delayMicroseconds(19);
        digitalWrite(pin, HIGH);
        break;
      case 3:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayMicroseconds(18);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayMicroseconds(1);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayMicroseconds(2);
        digitalWrite(pin, HIGH);
        delayMicroseconds(1);
        digitalWrite(pin, LOW);
        delayMicroseconds(19);
        digitalWrite(pin, HIGH);
        break;
      case 4:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayMicroseconds(17);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayMicroseconds(2);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayMicroseconds(2);
        digitalWrite(pin, HIGH);
        delayMicroseconds(1);
        digitalWrite(pin, LOW);
        delayMicroseconds(19);
        digitalWrite(pin, HIGH);
        break;
      case 5:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 6:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(16970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, LOW);
        delayNanoseconds(970);
        digitalWrite(pin, HIGH);
        delayNanoseconds(970);
        digitalWrite(pin, LOW);
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 7:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(17970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(1970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH);
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(18970);
        digitalWrite(pin, HIGH);
        break;
      case 8:
        digitalWrite(pin, LOW); //1/3 of GAP
        delayNanoseconds(16970);
        digitalWrite(pin, HIGH); // 2/3 of GAP
        delayNanoseconds(2970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(970);
        digitalWrite(pin, HIGH);
        delayNanoseconds(970);
        digitalWrite(pin, LOW); // 3/3 of GAP
        delayNanoseconds(19000);
        digitalWrite(pin, HIGH);
        break;
    }
  }
}
//////////////////////////////////////////////////////// Transmit Function End ////////////////////////////////////////////////////////////
