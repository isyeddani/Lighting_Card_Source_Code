#include <Arduino.h>
#include <SoftwareSerial.h>
#include "enable_pinout.h"
#include "Data_holder.h"
#include "input_char.h"
#include "transmit.h"
#include "transmit_same.h"
#include "global_variable.h"
Data_holder dh;
struct transmit tr;
struct transmit tr_same;
enable_pinout ep1;

///////////////////////////////////////////////////////// Setup Start  /////////////////////////////////////////////////////////////////
void setup()
{
  Serial.begin(152000);

  pinMode(23, OUTPUT);       // SETUP PIN
  pinMode(22, OUTPUT);       // IDLE
  pinMode(21, OUTPUT);       // RUNNING

  pinMode(0, OUTPUT);       // PWM-3
  pinMode(1, OUTPUT);       // PWM-4
  pinMode(2, OUTPUT);       // PWM-1
  pinMode(3, OUTPUT);       // PWM-2

  pinMode(4, OUTPUT);       // ENABLE PORT-1
  pinMode(5, OUTPUT);       // ENABLE PORT-2
  pinMode(6, OUTPUT);       // ENABLE PORT-3
  pinMode(7, OUTPUT);       // ENABLE PORT-4
  pinMode(8, OUTPUT);       // ENABLE PORT-8
  pinMode(9, OUTPUT);       // ENABLE PORT-7
  pinMode(10, OUTPUT);      // ENABLE PORT-6
  pinMode(11, OUTPUT);      // ENABLE PORT-5
  pinMode(20, OUTPUT);      // ENABLE PORT-12
  pinMode(19, OUTPUT);      // ENABLE PORT-11
  pinMode(18, OUTPUT);      // ENABLE PORT-10
  pinMode(17, OUTPUT);      // ENABLE PORT-9

  pinMode(23, OUTPUT);      // SETUP INDICATOR
  pinMode(22, OUTPUT);      // IDLE INDICATOR
  pinMode(21, OUTPUT);      // RUNNING INDICATOR
}
///////////////////////////////////////////////////////// Setup End /////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////Main Loop Start /////////////////////////////////////////////////////////////
void loop()
{

  while ((Setup_flag == false) && (Idle_flag == false) && (Running_flag == false)) // Run until whole setup is not completed, flag will turn true at last line of while loop
  {
    digitalWrite(23, HIGH);  // Turn the Setup Led on
    dh.Setup();
    digitalWrite(23, LOW);  // Turn the Setup Led off, as Setup has been completed..
    Setup_flag = true;
  }
  while ((Setup_flag == true) && (Idle_flag == false) && (Running_flag == false)) // Run until whole setup is not completed, flag will turn true at last line of while loop
  {
    digitalWrite(21, HIGH);  // Turn the Running Led on
    Serial.println("Running ");
    for (int i = 0; i < dh.port_no; i++)
    {
      digitalWrite(ep1.enable_pin(i + 1), HIGH);
      if (similar[i] == 0)
      {
        for (int j = 0; j < 4; j++)
        {
          memcpy(&tr, &dh.dtp[i][j], sizeof dh.dtp[i][j]);
          transmit(tr, ep1.pwm_trans(j + 1));
          //          Serial.print("-----");
        }
      }
      else if (similar[i] == 1)
      {
        memcpy(&tr_same, &dh.dtp[i][0], sizeof dh.dtp[i][0]);
        transmit_same(tr_same, ep1.pwm_pin);
        //        Serial.print("--------------------");
      }
      digitalWrite(ep1.enable_pin(i + 1), LOW);
      delayMicroseconds(5);
    }
    Running_flag = true;
    //    Serial.println("Done Running");
    digitalWrite(21, LOW);  // Turn the Running Led on
  }
  digitalWrite(22, HIGH);  // Turn the Idle Led on
  count = count + 1;
  /////////// GREEN ///////////////////////
  if (count == 30) {
    for (int i = 0; i < dh.port_no; i++)
    {
      dh.dtp[i][0].Rd_var = 0;
      dh.dtp[i][1].Rd_var = dh.dtp[i][0].Rd_var;
      dh.dtp[i][2].Rd_var = dh.dtp[i][0].Rd_var;
      dh.dtp[i][3].Rd_var = dh.dtp[i][0].Rd_var;

      dh.dtp[i][0].Gr_var = 8;
      dh.dtp[i][1].Gr_var = dh.dtp[i][0].Gr_var;
      dh.dtp[i][2].Gr_var = dh.dtp[i][0].Gr_var;
      dh.dtp[i][3].Gr_var = dh.dtp[i][0].Gr_var;

      dh.dtp[i][0].Bl_var = 0;
      dh.dtp[i][1].Bl_var = dh.dtp[i][0].Bl_var;
      dh.dtp[i][2].Bl_var = dh.dtp[i][0].Bl_var;
      dh.dtp[i][3].Bl_var = dh.dtp[i][0].Bl_var;
    }
  }
  /////////// BLUE ///////////////////////
  if (count == 60) {
    for (int i = 0; i < dh.port_no; i++)
    {
      dh.dtp[i][0].Rd_var = 0;
      dh.dtp[i][1].Rd_var = dh.dtp[i][0].Rd_var;
      dh.dtp[i][2].Rd_var = dh.dtp[i][0].Rd_var;
      dh.dtp[i][3].Rd_var = dh.dtp[i][0].Rd_var;

      dh.dtp[i][0].Gr_var = 0;
      dh.dtp[i][1].Gr_var = dh.dtp[i][0].Gr_var;
      dh.dtp[i][2].Gr_var = dh.dtp[i][0].Gr_var;
      dh.dtp[i][3].Gr_var = dh.dtp[i][0].Gr_var;

      dh.dtp[i][0].Bl_var = 8;
      dh.dtp[i][1].Bl_var = dh.dtp[i][0].Bl_var;
      dh.dtp[i][2].Bl_var = dh.dtp[i][0].Bl_var;
      dh.dtp[i][3].Bl_var = dh.dtp[i][0].Bl_var;
    }
  }
  /////////// Back to RED ///////////////////////
  if (count == 90) {
    for (int i = 0; i < dh.port_no; i++)
    {
      dh.dtp[i][0].Rd_var = 8;
      dh.dtp[i][1].Rd_var = dh.dtp[i][0].Rd_var;
      dh.dtp[i][2].Rd_var = dh.dtp[i][0].Rd_var;
      dh.dtp[i][3].Rd_var = dh.dtp[i][0].Rd_var;

      dh.dtp[i][0].Gr_var = 0;
      dh.dtp[i][1].Gr_var = dh.dtp[i][0].Gr_var;
      dh.dtp[i][2].Gr_var = dh.dtp[i][0].Gr_var;
      dh.dtp[i][3].Gr_var = dh.dtp[i][0].Gr_var;

      dh.dtp[i][0].Bl_var = 0;
      dh.dtp[i][1].Bl_var = dh.dtp[i][0].Bl_var;
      dh.dtp[i][2].Bl_var = dh.dtp[i][0].Bl_var;
      dh.dtp[i][3].Bl_var = dh.dtp[i][0].Bl_var;
    }
    count = 0;
  }
  delay(100);
  //  Serial.print("You Want to Send Again: 1 for Yes 0 for No:");
  //  int again_var = input_char();
  //  if (again_var == 1)
  //  {
  //    delay(3500);
  Running_flag = false;
  //  }
  digitalWrite(22, LOW);  // Turn the Idle Led on
}
/////////////////////////////////////////////////////Main Loop End ///////////////////////////////////////////////////////////////
