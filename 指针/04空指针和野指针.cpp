//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;

int main()
{
    // 空指针
    // 用于给指针变量进行初始化
//    int *p = NULL;


    // 指针变量是不可以访问的
    // 0-255之间的内存编号是系统占用的，因此不可以访问

//    cout << *p << endl;


    // 野指针，避免出现野指针

    int *p = (int *)0x1100;

    cout << *p << endl;


    return 0;
}