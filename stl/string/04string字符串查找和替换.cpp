//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>

using namespace std;
/**
 * 查找和替换 find rfind
 */

// 1 查找
void test01()
{
    string str1 = "abcdefgde";

    int pos = str1.find("de");

    if (pos == -1)
        cout << "未找到子串" << endl;
    else
        cout << "pos = " << pos << endl;



    // rfind 区别，从右往左
    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;
}


void test02()
{
    string str1 = "abcdedg";

    // 从1好位置，3个字符替换成1111
    str1.replace(1, 3, "1111");

    cout << str1 << endl;


}

int main()
{
//    test01();
    test02();
    return 0;
}