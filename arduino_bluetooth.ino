// developed by mariogonh
// www.aquicoco.com
// blog.aquicoco.com
/** This software has been developed for the bq arduino board. **/

#include <SoftwareSerial.h>

/***   Global variables   ***/
SoftwareSerial blueToothSerial(0,1);

/***   Function declaration   ***/

void setup()
{



  pinMode(0,INPUT);
  pinMode(1, OUTPUT);
  blueToothSerial.begin(38400); // This value it's only for freaduino, it's not for zum.
  blueToothSerial.flush();

  pinMode(5,OUTPUT); // LED OUTPUT

}


void loop()
{
  if (blueToothSerial.available()>0){
    int bt=blueToothSerial.read();
    // 69 means 'E' on ASCII
    if (bt == 69) {
      digitalWrite(5,HIGH);
     }
    // 65 means 'A' on ASCII
    if (bt == 65) {
      digitalWrite(5,LOW);
     }

  }

}
