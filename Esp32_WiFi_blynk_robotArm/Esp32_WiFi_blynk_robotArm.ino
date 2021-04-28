/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  Note: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#include <TinyStepper.h>

// Define Arduino Pin Outputs to to the ULN2003 Darlington Array to drive a 28BYJ-48 Stepper Motor
#define IN1 15
#define IN2 2
#define IN3 0
#define IN4 4

#define IN12 32 
#define IN22 33
#define IN32 25
#define IN42 26

#define IN13 13
#define IN23 12
#define IN33 14 
#define IN43 27


#define HALFSTEPS 4096  // Number of half-steps for a full rotation

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";
char pass[] = "";

TinyStepper stepper(HALFSTEPS, IN1, IN2, IN3, IN4);
TinyStepper stepper2(HALFSTEPS, IN12, IN22, IN32, IN42);
TinyStepper stepper3(HALFSTEPS, IN13, IN23, IN33, IN43);


BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  Serial.print("V1 Slider value is: ");
  Serial.println(pinValue);
  stepper.Move(pinValue);
}

BLYNK_WRITE(V2)
{
  int pinValue = param.asInt();
  Serial.print("V2 Slider value is: ");
  Serial.println(pinValue);
  stepper2.Move(pinValue);
  
}

BLYNK_WRITE(V3)
{
  int pinValue = param.asInt();
  Serial.print("V3 Slider value is: ");
  Serial.println(pinValue);
  /*if(pinValue > 0)
  {
  stepper3.Move(pinValue);
  }else
  {
    stepper3.Move(-pinValue);
  }*/
  stepper3.Move(pinValue);
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
