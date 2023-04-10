#include "Data_holder.h"
#include "input_char.h"
#include <SoftwareSerial.h>
#include <Arduino.h>


void Data_holder::Setup()
{
  Serial.println ("                         -- Setup -- ");
  Serial.println();
  Serial.print("Enter The No. of Ports you want to Access:");
  port_no = 10;  // user will enter how many ports rj45 will use.
  Serial.print(port_no);
  Serial.print(";");
  //pin number when we call that class. like port 2(rj45) enable when we turn pin 5 High.
  Serial.println(ep.enable_pin(port_no));
  for (int i = 0; i < port_no; i++)
  {
    Serial.print("          Enter Data You Want to Transmit on port:");
    Serial.println(i + 1);
    Serial.println("If you want to transmit simmilar data on this port, 1 for yes 0 for no");
    similar[i] = 1;

    /////////////////// For Non Similiar Inputs  ////////////////////////
    if (similar[i] == 0)
    {
      for (int j = 0; j < 4; j++)
      {
        Serial.print("    Enter Data You Want to Transmit on ");
        Serial.print(j + 1);
        Serial.print(" branch of port ");
        Serial.println(i + 1);

        Serial.println("Enter Color and Intensity     ");

        Serial.print("Enter Red Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
        dtp[i][j].Rd_var = input_char();
        Serial.println(dtp[i][j].Rd_var);

        Serial.print("Enter Green Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
        dtp[i][j].Gr_var = input_char();
        Serial.println(dtp[i][j].Gr_var);

        Serial.print("Enter Blue Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
        dtp[i][j].Bl_var = input_char();
        Serial.println(dtp[i][j].Bl_var);

        Serial.print("You Want to Run Solid Or Alternate, Type (0) For Solid and (1) For Alternate: ");
        dtp[i][j].alt = input_char();
        Serial.println(dtp[i][j].alt);

        if (dtp[i][j].alt == 1)
        {
          Serial.println("Enter Alternate Color and Intensity");

          Serial.print("Enter Red Alternate Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
          dtp[i][j].Rd_var_alt = input_char();
          Serial.println(dtp[i][j].Rd_var_alt);

          Serial.print("Enter Green Alternate Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
          dtp[i][j].Gr_var_alt = input_char();
          Serial.println(dtp[i][j].Gr_var_alt);

          Serial.print("Enter Blue Alternate Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
          dtp[i][j].Bl_var_alt = input_char();
          Serial.println(dtp[i][j].Bl_var_alt);
        }
        if ((dtp[i][j].alt != 0) && (dtp[i][j].alt != 1))
        {
          Serial.print("Invalid Input");
        }
        Serial.print("Enter Brightness Levels from 0 to 8 : ");
        dtp[i][j].Bright = input_char();
        Serial.println(dtp[i][j].Bright);
      }
    }


    /////////////////// For Non Similiar Inputs  ////////////////////////
    if (similar[i] == 1)
    {
      Serial.print("    Enter Data You Want to Transmit on ");
      Serial.println("Enter Color and Intensity     ");

      Serial.print("Enter Red Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
      dtp[i][0].Rd_var = 8;
      dtp[i][1].Rd_var = dtp[i][0].Rd_var;
      dtp[i][2].Rd_var = dtp[i][0].Rd_var;
      dtp[i][3].Rd_var = dtp[i][0].Rd_var;
      Serial.println(dtp[i][0].Rd_var);

      Serial.print("Enter Green Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
      dtp[i][0].Gr_var = 0;
      dtp[i][1].Gr_var = dtp[i][0].Gr_var;
      dtp[i][2].Gr_var = dtp[i][0].Gr_var;
      dtp[i][3].Gr_var = dtp[i][0].Gr_var;
      Serial.println(dtp[i][0].Gr_var);

      Serial.print("Enter Blue Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
      dtp[i][0].Bl_var = 0;
      dtp[i][1].Bl_var = dtp[i][0].Bl_var;
      dtp[i][2].Bl_var = dtp[i][0].Bl_var;
      dtp[i][3].Bl_var = dtp[i][0].Bl_var;
      Serial.println(dtp[i][0].Bl_var);

      Serial.print("You Want to Run Solid Or Alternate, Type (0) For Solid and (1) For Alternate: ");
      dtp[i][0].alt = 0;
      dtp[i][1].alt = dtp[i][0].alt;
      dtp[i][2].alt = dtp[i][0].alt;
      dtp[i][3].alt = dtp[i][0].alt;
      Serial.println(dtp[i][0].alt);

      if (dtp[i][0].alt == 1)
      {
        Serial.println("Enter Alternate Color and Intensity");

        Serial.print("Enter Red Alternate Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
        dtp[i][0].Rd_var_alt = input_char();
        dtp[i][1].Rd_var_alt = dtp[i][0].Rd_var_alt;
        dtp[i][2].Rd_var_alt = dtp[i][0].Rd_var_alt;
        dtp[i][3].Rd_var_alt = dtp[i][0].Rd_var_alt;
        Serial.println(dtp[i][0].Rd_var_alt);

        Serial.print("Enter Green Alternate Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
        dtp[i][0].Gr_var_alt = input_char();
        dtp[i][1].Gr_var_alt = dtp[i][0].Gr_var_alt;
        dtp[i][2].Gr_var_alt = dtp[i][0].Gr_var_alt;
        dtp[i][3].Gr_var_alt = dtp[i][0].Gr_var_alt;
        Serial.println(dtp[i][0].Gr_var_alt);

        Serial.print("Enter Blue Alternate Intensity from 0 to 8 '0'=OFF, '8'=FULL : ");
        dtp[i][0].Bl_var_alt = input_char();
        dtp[i][1].Bl_var_alt = dtp[i][0].Bl_var_alt;
        dtp[i][2].Bl_var_alt = dtp[i][0].Bl_var_alt;
        dtp[i][3].Bl_var_alt = dtp[i][0].Bl_var_alt;
        Serial.println(dtp[i][0].Bl_var_alt);
      }
      if ((dtp[i][0].alt != 0) && (dtp[i][0].alt != 1))
      {
        Serial.print("Invalid Input");
      }
      Serial.print("Enter Brightness Levels from 0 to 8 : ");
      dtp[i][0].Bright = 8;
      dtp[i][1].Bright = dtp[i][0].Bright;
      dtp[i][2].Bright = dtp[i][0].Bright;
      dtp[i][3].Bright = dtp[i][0].Bright;
      Serial.println(dtp[i][0].Bright);

    }
    Serial.println();
  }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
