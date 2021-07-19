#include "Led.h"
void setup() 
{
  Serial.begin(9600);
  Led myLed;   //建立led类的对象，同时调用构造函数Led(),生命周期结束后调用析构函数~Led()
  
  myLed.steLedPin(3);  //把Led::Led()中定义好的13引脚变成了3
  int myLedPin=myLed.getLedPin();
  Serial.print("int myLedPin=");
  Serial.print(myLedPin); 
  
  Led myLed2(7);

  int myLed2Pin = myLed2.getLedPin();//把myLed2对象中的getLedPin返回的值给myLed2Pin，并输出
  Serial.print("myLed2Pin=");
  Serial.print(myLed2Pin);
  
  Serial.println("Hello,this is from setup()");

  for(int i=0;i<3;i++)
  {
    myLed.on();
    myLed2.on();
    delay(1000);
    myLed.off();
    myLed2.off();
    delay(1000);
  }
  //对象生命周期结束,析构函数~Led()发挥作用，输出Led Object Deleted
}
void loop() 
{
}
