//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
#include <string>
using namespace std;

/**
 * 类模板语法
 * @tparam NameType
 * @tparam AgeType
 */

template<class NameType, class AgeType>
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
        cout << "age:  " << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};

void test01()
{
    // 模板的参数列表
    Person<string, int> p1("Tom", 19);
    p1.showPerson();
}

int main()
{
    test01();
    return 0;
}

