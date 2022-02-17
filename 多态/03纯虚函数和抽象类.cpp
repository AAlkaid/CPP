//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
using namespace std;

class Base
{
public:
    // 纯虚函数：
    // 只要有一个纯虚函数，这个类就叫做抽象类
    // 抽象类的特点：
    //  - 无法实例化对象
    //  - 抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类

    virtual void func() = 0;
};

class Son:public Base
{
public:
    void func()
    {
        cout << "call function" << endl;
    }
};

void test01()
{
//    Base b;// 抽象类无法实例化对象
//    Son s; // 子类必须重写纯虚函数

    Base *base = new Son;
    base->func();

    delete base;
}

int main()
{
    test01();
    return 0;
}