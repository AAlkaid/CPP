//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
using namespace std;
// 防止误操作

struct student{
    string name;
    int age;
    int score;
};

// 将指针改为形式参数，可以减少内存使用，而且不会复制一个新的
// 防止误操作
void printStudents(const student *s)
{
//    s->age = 180; // 这个就不让改了！
    cout << s->name << " " << s->age << " " << s->score << endl;
}

int main()
{
    struct student s = {"zhangsan", 15, 70};

    // 通过函数打印结构体变量的信息
    printStudents(&s);

    return 0;
}