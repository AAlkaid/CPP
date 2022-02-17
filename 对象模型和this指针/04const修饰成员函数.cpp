//
// Created by BUZHENYU on 2022/1/25.
//

#include <iostream>
using namespace std;

/**
 * 常函数：
 * 1、成员函数后加const，就叫常函数
 * 2、常函数不可以修改成员属性
 * 3、成员属性声明的时候加mutable后，在常函数中依旧可以修改
 *
 * 常变量：
 * 1、声明对象前加const
 * 2、常对象只能调用常函数
 *
 */

class person
{
public:
    /**
    // 成员函数内部都有一个this指针
    // this指针的本质：指针常量，指向不可以修改
    // person * const this;
    // 如果值也不让改
    // const person * const this;
    // 成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
     */
    void showPerson() const
    {
//        this->m_A = 100;
//        this = NULL; // this不可以修改朝向
        this->m_B = 100;
    }

    void func()
    {

    }
    int m_A;
    // 特殊变量，即使在常函数中，也可以修改
    // 加上mutable
    mutable int m_B;
};

void test01()
{
    person p;
    p.showPerson();
}

// 常对象
void test02()
{
    const person p{};
    p.m_A = 100;
    p.m_B = 100; // 常对象下也可以修改

    // 常对象只能调用常函数
    p.showPerson();

    // 报错
    p.func();


}

int main()
{

    return 0;
}

