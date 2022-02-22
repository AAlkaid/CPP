//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;

int main()
{
    // 1、定义指针
    int a = 10;
    int * p;
    p = &a;
    cout << p << endl << &a << endl;

    // 2、使用指针,加*代表解引用
    cout << *p << endl;

    *p = 100;
    cout << a << endl;


    return 0;
}
