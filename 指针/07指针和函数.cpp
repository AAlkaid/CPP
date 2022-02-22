//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;
// 指针作为函数的行参

void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "swap01 a:" << a << endl;
    cout << "swap01 b:" << b << endl;

}

void swap02(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "swap01 a:" << *p1 << endl;
    cout << "swap01 b:" << *p2 << endl;

}

int main()
{
    // 指针和函数
    // 1、值传递
    int a = 10, b = 20;
    swap01(a, b);
    cout << a << " " << b << endl;

    // 2、地址传递
    swap02(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}