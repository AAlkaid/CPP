//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
using namespace std;
// 成员函数类外实现

/**
 * 成员函数类外实现
 * 1、构造函数类外实现，需要加上模板的参数列表
 * 2、成员函数类外实现，需要加上模板的参数列表
 * @tparam T1
 * @tparam T2
 */

template<class T1, class T2>
class Person
{
public:
    T1 m_Name;
    T2 m_Age;

    Person(T1 name, T2 age);
//    {
//        this->m_Name = name;
//        this->m_Age = age;
//    }

    void showPerson();
//    {
//        cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//    }
};

// 1、构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

// 2、成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
}

void test01()
{
    Person<string, int> p("tom", 20);
    p.showPerson();
}


int main()
{
    test01();
    return 0;
}