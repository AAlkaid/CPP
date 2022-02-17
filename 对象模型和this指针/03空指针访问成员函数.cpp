//
// Created by BUZHENYU on 2022/1/25.
//

#include <iostream>
using namespace std;

class person
{
public:
    void showClassName()
    {
        cout << "This is person class; " << endl;
    }

    void showPersonAge()
    {
        if (this == NULL)
            return;
        // 传入指针为空，没有对象还想访问对象的年龄
        cout << "age = " << this->m_Age << endl;
    }

    int m_Age;
};

void test01()
{
    person *p = NULL;

//    p->showClassName();
    p->showPersonAge();
}

int main()
{
    test01();
    return 0;
}