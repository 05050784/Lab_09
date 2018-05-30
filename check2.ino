#include<IRremote.h>
  
int buttonSate =0;
IRsend irsend ;
void setup() 
{
       // put your setup code here, to run once:
pinMode(3,OUTPUT);
}
  
void loop()
{
buttonSate = digitalRead(6);
         if(buttonSate){
                 digitalWrite(3,1);
irsend.sendNEC(0x4FB48B7,32);
}
delay(100);
 digitalWrite(3,0);
}

