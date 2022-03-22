//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;
// 1、函数模板注意事项
// - 自动类型推导，必须要推导出一致的数据类型T才能使用
// - 必须要确定出T的数据类型才能使用

template<class T> // typename可以替换成class
void mySwap(T&a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10, b = 20;
    char c = 'c';
//    mySwap(a, b);
//    mySwap(a, c) // 推导不出一致的T


    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

}

template<class T>
void func()
{
    cout << "func called." << endl;
}


void test02()
{
    func<int>();
}
int main()
{
    test02();
    return 0;
}
