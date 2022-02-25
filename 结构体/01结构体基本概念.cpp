//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
#include <string>
using namespace std;
// 1、创建学生数据类型


struct student{
    // 成员列表
    string name;
    int age;
    int score;
}s3;


student s1;


int main()
{
    // 2、通过这个结构体创建具体的学生
    // struct关键字可以省略
    // 2.1 struct Student s1
    struct student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    cout << "name：" << s1.name
         << " age : " << s1.age
         << " score:" << s1.score << endl;
    // 2.2 struct Student s2 = {...}
    struct student s2 = {"lisi", 19, 80};
    cout << "name：" << s2.name
         << " age : " << s2.age
         << " score:" << s2.score << endl;
    // 2.3 定义的时候顺便创建
    s3.name = "张三222";
    s3.age = 1833;
    s3.score = 10022;
    cout << "name：" << s3.name
         << " age : " << s3.age
         << " score:" << s3.score << endl;
    return 0;
}

