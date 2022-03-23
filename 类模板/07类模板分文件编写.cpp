//
// Created by VINNO on 2022/3/23.
//
#include "person.hpp"

#include <iostream>

/**
 * 类模板中成员函数的创建是在调用的阶段，所以导致份文件编写链接不到
 *
 */
//#include <string>
//using namespace std;
//
//template<class T1, class T2>
//class Person{
//public:
//    T1 m_Name;
//    T2 m_Age;
//
//    Person(T1 name, T2 age);
//
//    void showPerson();
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//    this->m_Name = name;
//    this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//        cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//}


void test01()
{
    Person<string, int> p("toom", 18);
    p.showPerson();
}


int main()
{
    test01();
    return 0;
}