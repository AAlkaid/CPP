//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
using namespace std;

struct student{
    int age;
    int score;
    string name;
};

void printStudent1(student s1)
{
    s1.age = 1000;
    cout << "子函数：" << s1.name << " " << s1.age << " " << s1.score << endl;
}

void printStudent2(student *p)
{
    p->age = 19000;
    cout << "子函数：" << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{
    struct student s;
    s.name = "zhangsan";
    s.age = 20;
    s.score = 100;

    cout << "main : " << s.name << " "
         << s.score << " "
         << s.age << endl;


    printStudent1(s);
    printStudent2(&s);


    cout << "main : " << s.name << " "
         << s.score << " "
         << s.age << endl;
    return 0;
}