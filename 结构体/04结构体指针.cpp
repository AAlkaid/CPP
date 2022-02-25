//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
#include <string>
using namespace std;

// 定义结构体指针
struct student{
    string name;
    int age;
    int score;
};


int main()
{
    // 1、创建学生结构体变量
    student s = {"zhangsan", 18, 100};

    // 2、通过指针指向结构体变量
    student *p = &s;

    // 3、通过指针访问结构体变量中的数据
    p->name = "lisi";
    cout << p->name ;


    return 0;
}