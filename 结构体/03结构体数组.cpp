//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
#include <string>
using namespace std;

// 结构体数组
// 1、定义一个结构体
struct student{
    string name;
    int age;
    int score;
};

// 2、创建一个结构体数组
struct student stuArray[3] =
{
        {"zhangsan", 18, 100},
        {"lisi", 20, 99},
        {"wangwu", 23, 100}
};





int main()
{
    // 3、给结构体数组中的元素赋值
    stuArray[0].name = "s";
    stuArray[0].age = 80;
    stuArray[0].score = 60;

    // 4、遍历结构体数组
    for (int i = 0; i < 3; i ++)
    {
        cout << stuArray[i].name << " "
             << stuArray[i].age << " "
             << stuArray[i].score << endl;
    }

    return 0;
}

