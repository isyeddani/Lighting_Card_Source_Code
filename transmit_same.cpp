#include <SoftwareSerial.h>
#include <Arduino.h>
#include "global_variable.h"
#include "transmit_same.h"
//////////////////////////////////////////////////////// Transmit Same Function Starts//////////////////////////////////////////////////////
void transmit_same(struct transmit trf_same, int A[4])
{
  if (trf_same.alt == 0)
  {
    int Rtemp = trf_same.Rd_var;
    int Gtemp = trf_same.Gr_var;
    int Btemp = trf_same.Bl_var;
    digitalWrite(A[0], LOW);
    digitalWrite(A[1], LOW);
    digitalWrite(A[2], LOW);
    digitalWrite(A[3], LOW);
    delayMicroseconds(41);
    digitalWrite(A[0], HIGH);
    digitalWrite(A[1], HIGH);
    digitalWrite(A[2], HIGH);
    digitalWrite(A[3], HIGH); //Break
    delayNanoseconds(6400);// 6.6usec
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 256; j++)
      {
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // markafterbreak
        delayNanoseconds(800);
        switch (Rtemp)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6800);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(980);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(1970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW);//  1/3 of RGB, zero cause its RED
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(7800);
            break;
        }
        ////////// GREEN START //////////////
        switch (Gtemp)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7800); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause itsGREEN
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(2970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(1970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7800);
            break;
        }
        /////////// GREEN END //////////////

        ////////// BLUE STARTS //////////////
        switch (Btemp)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7800); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW);//  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6920);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(920);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5920);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1920);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4940);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(1940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(5940);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7800);
            break;
        }
        ///////////// BLUE END //////////////////
        if (j < 255)
        {
          digitalWrite(A[0], HIGH);
          digitalWrite(A[1], HIGH);
          digitalWrite(A[2], HIGH);
          digitalWrite(A[3], HIGH); //Stop
          delayNanoseconds(4800);
        }
        else
        {
          digitalWrite(A[0], HIGH);
          digitalWrite(A[1], HIGH);
          digitalWrite(A[2], HIGH);
          digitalWrite(A[3], HIGH); //Stop
          delayNanoseconds(4800);
        }
      }
      if (i == 0)
      {
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(22800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); //Break
        delayNanoseconds(6500);// 6.6usec
      }
    }
    int bright_var = trf_same.Bright;
    switch (bright_var)
    {
      case 1:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(20800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 2:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(2800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 3:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(17800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 4:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 5:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 6:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 7:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);   //1/3 of GAP
        delayNanoseconds(17800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 8:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(2800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
    }
  }
  //////////////////////////////////Alternate////////////////////////////////
  if (trf_same.alt == 1)
  {
    int Rtemp = trf_same.Rd_var;
    int Gtemp = trf_same.Gr_var;
    int Btemp = trf_same.Bl_var;
    int Rtemp_alt = trf_same.Rd_var_alt;
    int Gtemp_alt = trf_same.Gr_var_alt;
    int Btemp_alt = trf_same.Bl_var_alt;
    digitalWrite(A[0], LOW);
    digitalWrite(A[1], LOW);
    digitalWrite(A[2], LOW);
    digitalWrite(A[3], LOW);
    delayMicroseconds(41);
    digitalWrite(A[0], HIGH);
    digitalWrite(A[1], HIGH);
    digitalWrite(A[2], HIGH);
    digitalWrite(A[3], HIGH); //Break
    delayNanoseconds(6400);// 6.6usec
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 128; j++)
      {

        ///////////////////////////////////////////////////////////////////////
        /////////////////////////////////First RGB //////////////////////////
        //////////////////////////////////////////////////////////////////////
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // markafterbreak
        delayNanoseconds(800);
        switch (Rtemp)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(1970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW);//  1/3 of RGB, zero cause its RED
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(7800);
            break;
        }
        ////////// GREEN START //////////////
        switch (Gtemp)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7800); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause itsGREEN
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(2970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(1970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7800);
            break;
        }
        /////////// GREEN END //////////////

        ////////// BLUE STARTS //////////////
        switch (Btemp)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7800); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW);//  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6920);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(920);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5920);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1920);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4940);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(1940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(5940);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7800);
            break;
        }
        ///////////// BLUE END /////////////////
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); //Stop
        delayNanoseconds(4800);

        ///////////////////////////////////////////////////////////////////////
        /////////////////////////////////Seconds RGB //////////////////////////
        //////////////////////////////////////////////////////////////////////
        switch (Rtemp_alt)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayMicroseconds(8); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(4);
            delayNanoseconds(3800);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(2970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(1970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW);//  1/3 of RGB, zero cause its RED
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            delayNanoseconds(7800);
            break;
        }
        ////////// GREEN START //////////////
        switch (Gtemp_alt)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7800); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(970);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1970);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause itsGREEN
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3970);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(2970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(4970);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(1970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(5970);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            delayNanoseconds(7800);
            break;
        }
        /////////// GREEN END //////////////

        ////////// BLUE STARTS //////////////
        switch (Btemp_alt)
        {
          case 0:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7800); break;
          case 1:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW);//  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6920);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(920);
            break;
          case 2:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(6);
            delayNanoseconds(5920);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its RED
            //delayMicroseconds(2);
            delayNanoseconds(1920);
            break;
          case 3:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4970);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2970);
            break;
          case 4:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its GREEN
            // delayMicroseconds(4);
            delayNanoseconds(3940);
            break;
          case 5:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(2940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(4940);
            break;
          case 6:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(1940);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(5940);
            break;
          case 7:
            digitalWrite(A[0], LOW);
            digitalWrite(A[1], LOW);
            digitalWrite(A[2], LOW);
            digitalWrite(A[3], LOW); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(990);
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(6990);
            break;
          case 8:
            digitalWrite(A[0], HIGH);
            digitalWrite(A[1], HIGH);
            digitalWrite(A[2], HIGH);
            digitalWrite(A[3], HIGH); //  1/3 of RGB, zero cause its BLUE
            delayNanoseconds(7800);
            break;
        }
        ///////////// BLUE END //////////////////
        if (j < 128)
        {
          digitalWrite(A[0], HIGH);
          digitalWrite(A[1], HIGH);
          digitalWrite(A[2], HIGH);
          digitalWrite(A[3], HIGH); //Stop
          delayNanoseconds(4800);
        }
        else
        {
          digitalWrite(A[0], HIGH);
          digitalWrite(A[1], HIGH);
          digitalWrite(A[2], HIGH);
          digitalWrite(A[3], HIGH); //Stop
          delayNanoseconds(4800);
        }

        ///////////////////////////////////////////////////////////////////////
        /////////////////////////////////Seconds RGB //////////////////////////
        //////////////////////////////////////////////////////////////////////

        if (i == 0)
        {
          digitalWrite(A[0], LOW);
          digitalWrite(A[1], LOW);
          digitalWrite(A[2], LOW);
          digitalWrite(A[3], LOW); //1/3 of GAP
          delayNanoseconds(16800);
          digitalWrite(A[0], HIGH);
          digitalWrite(A[1], HIGH);
          digitalWrite(A[2], HIGH);
          digitalWrite(A[3], HIGH); // 2/3 of GAP
          delayNanoseconds(800);
          digitalWrite(A[0], LOW);
          digitalWrite(A[1], LOW);
          digitalWrite(A[2], LOW);
          digitalWrite(A[3], LOW); // 3/3 of GAP
          delayNanoseconds(22800);
          digitalWrite(A[0], HIGH);
          digitalWrite(A[1], HIGH);
          digitalWrite(A[2], HIGH);
          digitalWrite(A[3], HIGH); //Break
          delayNanoseconds(6500);// 6.6usec
        }
      }
    }
    int bright_var = trf_same.Bright;
    switch (bright_var)
    {
      case 1:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(20800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 2:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(2800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 3:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(17800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 4:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 5:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 6:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 2/3 of GAP
        delayNanoseconds(970);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 7:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW);   //1/3 of GAP
        delayNanoseconds(17800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(1800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
      case 8:
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); //1/3 of GAP
        delayNanoseconds(16800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH); // 2/3 of GAP
        delayNanoseconds(2800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        delayNanoseconds(800);
        digitalWrite(A[0], LOW);
        digitalWrite(A[1], LOW);
        digitalWrite(A[2], LOW);
        digitalWrite(A[3], LOW); // 3/3 of GAP
        delayNanoseconds(18800);
        digitalWrite(A[0], HIGH);
        digitalWrite(A[1], HIGH);
        digitalWrite(A[2], HIGH);
        digitalWrite(A[3], HIGH);
        break;
    }
  }
}
//////////////////////////////////////////////////////// Transmit Same Function Starts//////////////////////////////////////////////////////
