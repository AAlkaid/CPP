//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
using namespace std;

/**
 * 类模板中成员函数一开始不会被创建的，因为不确定类型
 * 只有在被调用的时候才会被创建
 */

class Person1
{
public:
    void showPerson1()
    {
        cout << "show person 1" << endl;
    }
};

class Person2
{
public:
    void showPerson2()
    {
        cout << "show person 2" << endl;
    }
};

template<class T>
class MyClass
{
public:
    T obj;

    // 类模板中的成员函数，一开始不会创建的
    void func1()
    {
        obj.showPerson1();
    }

    void func2()
    {
        obj.showPerson2();
    }
};

void test01()
{
    MyClass<Person1> m;
    m.func1();
//    m.func2();
}


int main()
{
    test01();
    return 0;
}