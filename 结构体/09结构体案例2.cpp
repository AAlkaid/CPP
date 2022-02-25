//
// Created by Zybu on 2022/2/25.
//

#include <iostream>
using namespace std;

// 1、设计英雄结构体
struct Hero
{
    string name;

    int age;

    string sex;
};


void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i ++)
    {
        for (int j = 0; j < len - i - 1; j ++)
        {
            if (heroArray[j].age > heroArray[j+1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j+1];;
                heroArray[j+1] = temp;
            }
        }
    }
}

// 打印排序后的
void printHero(struct Hero heroArray[], int len )
{
    for (int i = 0; i < len; i ++)
    {
        cout << "姓名：" << heroArray[i].name
             << " 年龄：" << heroArray[i].age
             << " 性别: " << heroArray[i].sex << endl;
    }
}
int main()
{

    // 2、创建数组存放英雄
    struct Hero heroArray[5] = {
            {"liubei", 23, "male"},
            {"gaunyu", 22, "male"},
            {"zhangfei", 20, "male"},
            {"zhaoyun", 21, "male"},
            {"diaochan", 19, "female"}
    };

    int len = sizeof(heroArray) / sizeof(heroArray[0]);
//    for (int i = 0; i < len; i ++)
//    {
//        cout << "姓名：" << heroArray[i].name
//             << " 年龄：" << heroArray[i].age
//             << " 性别: " << heroArray[i].sex << endl;
//    }

    // 3、排序，对年龄进行升序
    bubbleSort(heroArray, len);

    // 4、打印输出
    printHero(heroArray, len);

    return 0;
}

