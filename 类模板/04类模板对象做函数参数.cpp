//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
#include <string>
#include <cxxabi.h>
using namespace std;

/**
 * 类模板对象做函数参数
 * 1、指定传入类型
 * 2、参数模板化
 * 3、类模板化
 */


template<class T1, class T2>
class Person{
public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson()
    {
        cout << "name：" << this->m_Name << " age: " << this->m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;
};


// 1、指定传入类型
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
}

// 2、参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
    p.showPerson();
    cout << "t1 type: " << abi::__cxa_demangle(typeid(T1).name(), 0, 0, 0) << endl;
    cout << "t2 type: " << abi::__cxa_demangle(typeid(T2).name(), 0, 0, 0) << endl;
}

// 3、将整个类模板化
template<class T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T type: " << abi::__cxa_demangle(typeid(T).name(), 0, 0, 0) << endl;
}

void test01()
{
    Person<string, int> p("tom", 10);
    printPerson1(p);
}


void test02()
{
    Person<string, int> p("Jerry", 90);
    printPerson2(p);
}

void test03()
{
    Person<string, int> p("buzhenyu", 30);
    printPerson3(p);
}



int main()
{
    test03();
    return 0;
}