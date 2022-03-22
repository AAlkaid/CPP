//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;

/**
 * 实现通用，对数组进行排序的函数
 * 排序规则：从大到小，选择排序
 * 测试：char[] int[]
 */

template<class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// 排序算法
template<class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i ++)
    {
        int max = i; // 最大值下标
        for (int j = i + 1; j < len; j ++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}

// print
template<class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i ++)
    {
        cout << arr[i] << " ";
    }
}

void test01()
{
    // 测试char
    char charArr[] = "badcfe";
    int arr[] = {1, 2,3, 4, 5};
    int num = sizeof (arr) / sizeof (arr[0]);
    mySort(arr, num);
    printArray(arr, num);
}

int main()
{
    test01();
    return 0;
}
