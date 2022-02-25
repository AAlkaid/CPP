//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
#include <string>
using namespace std;

struct student{
    int age;
    string name;
    int score;
};

struct teacher{
    int id;
    string name;
    int age;
    student stu;
};



int main()
{
    teacher t;
    t.id = 10000;
    t.name = "laowang";
    t.age = 50;
    t.stu.name = "xiaowang";
    t.stu.age = 20;
    t.stu.score = 100;

    cout << t.stu.name << " " << t.stu.age << endl;

    return 0;
}