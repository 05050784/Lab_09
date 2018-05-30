#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>


const int irReceiverPin=11;
IRrecv irrecv(irReceiverPin);
decode_results results;
//IRsend irsend;

void setup() {
    Serial.begin(9600);
    irrecv.enableIRIn();
}

void loop() {
//  if (Serial.read()!=-1)
  //{
    //  irsend.sendNEC(0xC1C7C03F,32);
      //Serial.println("Action!");
  //}
  if (irrecv.decode(&results))
  {
      Serial.print("irCode: ");
      Serial.print(results.value, HEX);
      Serial.print(", bits: ");
      Serial.println(results.bits);
      irrecv.resume();
  }
}
