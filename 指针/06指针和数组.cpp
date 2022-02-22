//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;
// 指针和数组
// 利用指针访问数组中的每个元素

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "1:" << arr[0] << endl;

    // 利用指针访问
    int *p = arr; // 指向首地址
    cout << "1:" << *p << endl;
    p ++;
    cout << "2:" << *p << endl;
    p++;
    cout << "3:" << *p << endl;

    cout << "Normal Iteration..." << endl;
    for (int i = 0; i < 10; i ++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int *p2 = arr;
    for (int i = 0; i < 10; i ++)
    {
        cout << *p2 << " ";
        p2++;
    }

    return 0;
}