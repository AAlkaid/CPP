//
// Created by Zybu on 2022/2/22.
//

#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i ++)
    {
        for (int j = 0; j < len - i - 1; j ++)
        {
            if ( arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // 1、创建数组
    int arr[5] = {3, 5, 4, 2, 1};

    int len = sizeof (arr) / sizeof (arr[0]);
    // 2、创建冒泡排序
    bubbleSort(arr, len);
    // 3、打印排序后的数组
    printArray(arr, len);
    return 0;
}