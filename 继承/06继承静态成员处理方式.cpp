//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A; // 编译阶段分配内存；所有对象共用一份;类内声明类外初始化

    static void func()
    {
        cout << "Base static void func call." << endl;
    }
};

int Base::m_A = 100;

class Son:public Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Son static void func call." << endl;
    }
};
int Son::m_A = 200;

//1、同名静态成员属性

void test01()
{
    //通过对象来访问
    cout << "------通过对象来访问-----" << endl;
    Son s;
    cout << "m_A::Son = " << s.m_A << endl;
    cout << "m_A::Base = " << s.Base::m_A << endl;

    //通过类名访问
    cout << "------通过类名来访问-----" << endl;
    cout << "m_A::Son = " << Son::m_A << endl;
    // 第一个：：表示类名访问，第二个：：父类作用域下
    cout << "m_A::Son = " << Son::Base::m_A << endl;


}
//2、同名静态成员函数

void test02()
{
    //通过对象来访问
    cout << "------通过对象来访问-----" << endl;
    Son s;
    s.func();
    s.Base::func();

    //通过类名访问
    cout << "------通过类名来访问-----" << endl;
    Son::func();
    Son::Base::func();
}
int main()
{
//    test01();
    test02();
    return 0;
}