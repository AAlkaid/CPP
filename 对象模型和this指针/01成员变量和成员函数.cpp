//
// Created by BUZHENYU on 2022/1/25.
//

#include <iostream>
using namespace std;


class person
{
    int m_A; // 非静态成员变量

    static int m_B; // 静态成员变量，不属于任何对象

    void func() {} // not static ,不属于类的对象

    static void func2(){}

};

int person::m_B = 0;

void test01()
{
    person p;

//    空对象占用的内存空间：1byte
//    空对象也会分1个字节，为了区分对象占用空间的位置
//    每个空对象也应该有独一无二的内存地址
    cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
    person p;

    cout << "size of p = " << sizeof(p) << endl;

}

int main()
{
    test01();
    test02();
    return 0;
}