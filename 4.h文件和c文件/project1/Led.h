#include <Arduino.h>

#ifndef _Led_H_
#define _Led_H_

class Led{        //建立一个类
  public:  //public表明以下的成员变量和成员函数为公有成员，在程序中可以任意调用
    Led();   //构造函数:构造函数是在类被建立的时候执行的函数（无参数时调用）
    Led(int userLedPin);//构造函数:构造函数是在类被建立的时候执行的函数（有参数时调用）
    ~Led();  //析构函数(destructor) 与构造函数相反，当对象结束其生命周期，如对象所在的函数已调用完毕时，系统自动执行析构函数。
    void on();//类的成员函数
    void off();//类的成员函数
    int getLedPin(); //获取私有成员变量，以便类外的调用
    void steLedPin(int userLedPin); //利用private里的ledPin改变pinMode

  private:  //私有(类以外的就不可以用，只能类之中的能用)
    int ledPin=13;
};

#endif
