// USB 5 AXIS Controller 
// Use with Arduino Leonardo or ProMicro.
// Install Joystick library

// AMSTUDIO 2018
// YT https://www.youtube.com/channel/UCQS1ZB3BVSrBo3tCs7PyfxQ
// Wiring + Setup https://youtu.be/iKIrbF6GnZ0
// Copyright _ Non Commerical_ Not for Resale https://creativecommons.org/licenses/by-nc-nd/4.0/ 

#include <Joystick.h>

Joystick_ Joystick;

int zAxis_ = 0; 
int RxAxis_ = 0;                    
int RyAxis_ = 0;  
int RzAxis_ = 0;          
int Throttle_ = 0;         

const bool initAutoSendState = true; 

void setup()
{
      Joystick.begin();
  }
   
void loop(){
 
zAxis_ = analogRead(A0);  
zAxis_ = map(zAxis_,0,1023,0,255);
 Joystick.setZAxis(zAxis_);  
  
RxAxis_ = analogRead(A1);
 RxAxis_ = map(RxAxis_,0,1023,0,255);
 Joystick.setRxAxis(RxAxis_);
  
 RyAxis_ = analogRead(A2);
 RyAxis_ = map(RyAxis_,0,1023,0,255);
 Joystick.setRyAxis(RyAxis_);

 RzAxis_ = analogRead(A3);
 RzAxis_ = map(RzAxis_,1023,0,255,0);            
Joystick.setRzAxis(RzAxis_);
  
Throttle_ = analogRead(A4);
Throttle_ = map(Throttle_,1023,0,255,0);         
Joystick.setThrottle(Throttle_);                
 
delay (50);
}

//AMSTUDIO Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.

