//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }

    void func()
    {
        cout << "Base ---> func call " << endl;
    }


    void func(int a)
    {
        cout << "Base ---> func(int a) call " << endl;
    }
    int m_A;
};

class Son:public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son ---> func call " << endl;
    }
    int m_A;
};

// 同名属性处理方式
void test01()
{
    Son s;
    cout << "M_A::Son= " << s.m_A << endl;
    // 通过子类对象访问父类同名成员需要添加作用域
    cout << "M_A::Base= " << s.Base::m_A << endl;
}
// 同名函数处理方式
void test02()
{
    Son s;
    s.func(); // 直接调用的话调用的就是子类中的同名成员


    //如何调用父类中同名的成员呢？
    s.Base::func();
    //如果子类中出现和父类同名的，那么父类的同名函数就全部隐藏掉
    s.Base::func(100);
}


int main()
{
//    test01();
    test02();
    return 0;
}

