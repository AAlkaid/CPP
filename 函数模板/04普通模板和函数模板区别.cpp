//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;
/**
 * 普通函数调用，可以发生隐式类型转换
 * 函数模板 1、自动类型推导，不会发生隐式类型转换
 *         2、显示指定类型，可以发生隐式类型转换
 */

// 普通函数
int myAdd01(int a, int b)
{
    return a + b;
}

// 函数模板
template<class T>
T myAdd02(T a, T b)
{
    return a + b;
}

void test01()
{
    int a = 10, b = 20;
    char c = 'c';
    cout << myAdd01(a, c) << endl;

    // 1、自动类型推导 c不行，类型不一样，不会隐式类型转换
//    myAdd02(a, b);
//    cout << myAdd02(a, c) << endl;

    // 2、显示指定类型,可以发生隐式类型转换
    myAdd02<int>(a, c);
    cout << myAdd02<int>(a, c) << endl;


}

int main()
{
    test01();
    return 0;
}