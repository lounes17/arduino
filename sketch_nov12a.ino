
int pinA=2;
int pinB=3;
int pinC=4;
int tab1[]={pinA,pinB,pinC};

void setup()
{

 digitalwrite(tab1,HIGH);
pinmode(tab1 ,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void digitalwrite( int tab[] , String mot)
{
  for(int i=0; i>tab.length ; i++){
     digitalWrite(tab[i],mot);
  }
}

void pinmode(int tab[], String mot )
{
  for(int i=0; i>tab.length ; i++) 
  {
     pinMode(tab[i],mot);
  }
}
