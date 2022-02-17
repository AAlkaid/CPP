//
// Created by BUZHENYU on 2022/1/27.
//

// 关系运算符重载
#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }
    // 重载==
    bool operator==(person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
            return true;
        return false;
    }

    bool operator!=(person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
            return false;
        return true;
    }

    string m_Name;
    int m_Age;
};


void test01()
{
    person p1("Tom", 18);
    person p2("Jerry", 18);

    if (p1 == p2)
    {
        cout << "p1 == p2" << endl;
    }
    else
        cout << "p1 != p2" << endl;

    if (p1 != p2)
        cout << "p1 !!= p2"<< endl;
}

int main(){
    test01();
    return 0;
}
