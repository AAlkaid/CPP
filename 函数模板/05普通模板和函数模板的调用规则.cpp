//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;
/**
 * 普通函数和函数模板的调用规则
 * 1、如果两个都可以实现，都先调用普通函数
 * 2、可以通过空参数列表强制调用函数模板
 * 3、函数模板也可以发生重载
 * 4、如果函数模板匹配的更好，那么就调用函数模板
 */


void myPrint(int a, int b)
{
    cout << "call 普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
    cout << "call 函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c) // 函数重载
{
    cout << "call 重载函数模板" << endl;
}

void test01()
{
    int a = 10, b = 20;

//    myPrint(a, b);

    // 空模板参数列表，强制调用函数模板那
    myPrint<>(a, b);

//    myPrint(a, b, 19);

    // 如果函数模板产生更好的匹配，优先考虑函数模板
    // 因为普通函数还需要进行隐式类型转换，太麻烦了
//    char c1 = 'a';
//    char c2 = 'b';
//
//    myPrint(c1, c2);
}

int main()
{
    test01();
    return 0;
}