#define SER 8
#define CLOCK 9
#define LATCH 10

void setup() 
{
  pinMode(LATCH,OUTPUT);
  pinMode(CLOCK,OUTPUT);
  pinMode(SER,OUTPUT);

}

void loop() 
{
 digitalWrite(LATCH,LOW);
 shiftOut(SER,CLOCK,LSBFIRST,160);
 digitalWrite(LATCH,HIGH);
 delay(5000);
}
