// sketch_arduino_bluetooth.ino
// developed by mariogonh
// www.aquicoco.com
// blog.aquicoco.com

#include <SoftwareSerial.h>

/***   Global variables   ***/
SoftwareSerial blueToothSerial(0,1);

/***   Function declaration   ***/

void setup()
{



  pinMode(0,INPUT);
  pinMode(1, OUTPUT);
  blueToothSerial.begin(38400); // This value it's only for free arduino, it's not for zum.
  blueToothSerial.flush();

  pinMode(5,OUTPUT);

}


void loop()
{
  if (blueToothSerial.available()>0){
    int bt=blueToothSerial.read();
    // 69 means 'E' on ASCI
    if (bt == 69) {
      digitalWrite(5,HIGH);
     }
    // 65 means 'A' on ASCI
    if (bt == 65) {
      digitalWrite(5,LOW);
     }

  }

}
