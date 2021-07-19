#include "Led.h"

PwmLed myPwmLed;  //创建PwmLed类型的对象，名称为myPwmLed

void setup() 
{
  
  Serial.begin(9600);
  myPwmLed.steLedPin(3);  //通过它的父类进行修改myPwmLedPin
  int myPwmLedPin=myPwmLed.getLedPin();//获取父类的myPwmLedPin
  Serial.print("int myPwmLedPin=");
  Serial.println(myPwmLedPin);
}
void loop() 
{
  for(int i=0;i<255;i++)
  {
     myPwmLed.on(i);
     Serial.print("myPwmLed.getPwmVal=");
     Serial.println(myPwmLed.getPwmVal());
     delay(10);
  }
}
