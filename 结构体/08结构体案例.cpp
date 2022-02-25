//
// Created by Zybu on 2022/2/23.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
struct student
{
    string sName;
    int score;
};

struct teacher
{
    string tName;
    student stu[5];
};

void allocateSpace(struct teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i ++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        // 为学生赋值
        for (int j = 0; j < 5;j ++)
        {
            tArray[i].stu[j].sName = "Student_";
            tArray[i].stu[j].sName += nameSeed[j];

            int random = rand() % 61+ 40;

            tArray[i].stu[j].score = random;
        }
    }
}

void printInfo(struct teacher tArray[], int len)
{
    for (int i = 0; i < len;i ++)
    {
        cout << "老师的姓名："  << tArray[i].tName << endl;
        for (int j = 0; j < 5; j ++)
        {
            cout << "\t学生的姓名：" << tArray[i].stu[j].sName << endl;
            cout << "\t学生的分数：" << tArray[i].stu[j].score << endl;
        }
        cout << "---------------------------" << endl;
    }
}

int main()
{

    // 随机数种子
    srand((unsigned int) time(NULL));

    // 1、创建3名老师的数组
    struct teacher tArray[3];

    // 2、赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    // 3、打印

    printInfo(tArray, len);

    return 0;
}