//
// Created by BUZHENYU on 2022/1/25.
//
#include <iostream>


// 1、解决名称冲突

// 2、返回对象本身

using namespace std;
class person
{
public:
    person(int age)
    {
        // this 指向的是：被调用成员函数所属对象
        this->age = age;
    }

// 如果不用引用，就会返回一个新的对象
    person& PersonAddAge(person &p)
    {
        this->age += p.age;

        // this是指向p2的指针，*this就是p2
        return *this;
    }


    int age;
};


void test01()
{
    person p1(18);
    cout << "p1的年龄=" << p1.age << endl;
}


void test02()
{
    person p1(10);
    person p2(10);

    p2.PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2's age = " << p2.age << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}