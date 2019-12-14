int led=7;
char serial;
void setup()
{
Serial.begin(9600);
pinMode(led,OUTPUT);

}

void loop() 
{
if(Serial.available()>0){

 serial=Serial.read();

 switch(serial) {

  case'a':
   digitalWrite(led,HIGH);
    Serial.println(serial);
   break;
  case'b':
   digitalWrite(led,0);
   Serial.println(serial);
   break;
 }  
  
}


}
