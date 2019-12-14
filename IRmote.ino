#include <IRremote.h>
int pin=7;
#define lamp 3
int etat=0;
IRrecv recv(pin);
decode_results(rslt); 




void setup()
{

Serial.begin(9600);
pinMode(lamp,OUTPUT);
recv.enableIRIn();
}

void loop() 
{

if(recv.decode(&rslt))
{
  Serial.println(rslt.value,DEC);
  delay(200);
 if(rslt.value==551465039)
 {
   etat=!etat;
    digitalWrite(lamp,etat);
  }
  recv.resume();
  
  
}
}
