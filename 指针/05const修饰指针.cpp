//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;
// const修饰指针
//  - 1、const修饰指针：常量指针
//  - 2、const修饰常量：指针常量
//  - 3、const既修饰指针，又修饰常量

int main()
{
    int a = 10, b = 10;

    // 1、常量指针，指针指向可以修改，指向的值不可以修改
//    const int *p = &a;
//    p = &b; // ok
//    *p = 20; // 不ok


    // 2、指针常量:指向不可以改，指向的值可以改
//    int * const p = &a;

//    *p = 20; // ok
//    p = &b; // 不ok

    // 3、既又：指针的指向，和指针指向的值都不可以改变
    const int * const p = &a;
    // 都不可以改动




    cout << p << endl;

    return 0;
}