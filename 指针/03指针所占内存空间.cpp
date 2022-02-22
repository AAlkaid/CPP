//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;


    // 64位操作系统，指针占8个字节，如果是32位，则占4个字节
    cout << sizeof p << endl << sizeof(int *) << endl;
    cout << sizeof p << endl << sizeof(float *) << endl;
    cout << sizeof p << endl << sizeof(double *) << endl;
    cout << sizeof p << endl << sizeof(char *) << endl;

    return 0;
}