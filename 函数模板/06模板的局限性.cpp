//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;
/**
 * 模板的局限性
 * 不是万能的，有些特定的数据类型，做具体化的实现
 *
 */


class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

// 对比两个数据是否相等
template<class T>
bool myCompare(T &a, T &b) // 自定义数据类型
{
    return a == b;
}


// 提供一个person版本的
// 利用具体化版本的person，会被优先调用

template<> bool myCompare(Person &p1, Person &p2)
{
    if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
        return true;
    else
        return false;
}



void test01()
{
    int a = 10, b = 20;

    bool res = myCompare(a, b);

    if (res)
        cout << " a == b" << endl;
    else
        cout << " a != b" << endl;
}


void test02()
{
    Person p1("tom", 110);
    Person p2("tom", 10);

    bool res = myCompare(p1, p2);

    if (res)
        cout << " p1 == p2" << endl;
    else
        cout << " p1 != p2" << endl;
}


int main()
{
//    test01();
    test02();
    return 0;
}