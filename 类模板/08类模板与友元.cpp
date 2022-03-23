//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
#include <string>
using namespace std;
/**
 * 类模板配合友元
 * 1、全局函数类内实现：简单，直接类内声明友元
 * 2、全局函数类外实现：复杂，需要提前让编译器知道全局函数的存在，还会有其他的
 * @tparam T1
 * @tparam T2
 */

template<class T1, class T2>
class Person;

// 全局函数，不用加作用域，但是得加template
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
    cout << "----name: " << p.m_Name << " age: " << p.m_Age << endl;
}
// 通过全局函数打印信息

template<class T1, class T2>
class Person
{

    // 全局函数类内实现
    friend void printPerson(Person<T1, T2> p)
    {
        cout << "name: " << p.m_Name << " age: " << p.m_Age << endl;
    }

    // 全局函数类外实现
    // 空模板参数列表
    // 如果全局函数是类外实现，得让编译器提前指定这个函数的存在
    friend void printPerson2<>(Person<T1, T2> p);

public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

private:
    T1 m_Name;
    T2 m_Age;
};


void test01()
{
    Person<string, int> p("tom", 20);
    printPerson(p);
}

void test02()
{
    Person<string, int> p("jerry", 99);
    printPerson2(p);
}

int main()
{
    test02();
    return 0;
}