//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
using namespace std;

/**
 * 类模板和函数模板的区别
 * 1、类模板不可以自动推导类型，都要自己写
 * 2、类模板的模板参数列表可以有默认参数，这样调用的时候可以不写
 *
 * @tparam NameType
 * @tparam AgeType
 */

template<class NameType, class AgeType = int>
class Person{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson()
    {
        cout << "name: " << this->m_Name << endl;
        cout << "age: " << this->m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};


// 1 没有自动类型推导

void test01()
{
//    Person p("tomo", 100); // 不行
    Person<string, int> p("tom", 11); //只能用显示指定类型

    p.showPerson();
}

void test02()
{
    Person<string> p("jerry", 20);
    p.showPerson();
}
// 2 类模板在模板参数列表中可以有默认参数
int main()
{
    test01();
    test02();
    return 0;
}