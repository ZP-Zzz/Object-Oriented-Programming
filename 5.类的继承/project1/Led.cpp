#include "Led.h"

Led::Led()//构造函数
{
  Serial.println("Led Object created");
  pinMode(13,OUTPUT);
}



Led::Led(int userLedPin)
{
  Serial.println("Led Object created");
  ledPin = userLedPin;
  pinMode(ledPin,OUTPUT);
}



Led::~Led()//析构函数
{
  Serial.println("Led Object Deleted");  
}



#include "Led.h"
void Led::on()//类的成员函数
{
  digitalWrite(ledPin,HIGH);
}



void Led::off()//类的成员函数
{
  digitalWrite(ledPin,LOW);
}



int Led::getLedPin()   //只要类内部的成员函数才能调用private里的变量
{
  return ledPin; 
}



void Led::steLedPin(int userLedPin)
{
  ledPin=userLedPin;
  pinMode(ledPin,OUTPUT);
}



void PwmLed::on(int userPwmVal)
{
  pwmVal=userPwmVal;
  analogWrite(getLedPin(),pwmVal);
  
}




int PwmLed::getPwmVal()
{
  return pwmVal;
}
