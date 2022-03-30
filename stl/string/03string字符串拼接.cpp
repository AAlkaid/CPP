//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>
/**
 * 字符串拼接，末尾追加字符串
 */

using namespace std;


void test01()
{
    string str1 = "我";
    str1 += "爱打游戏";
    cout << str1 << endl;

    str1 += ':';
    cout << str1 << endl;

    string str2 = "LOL DNF";
    str1 += str2;
    cout << str1 << endl;


    string str3 = "I";
    str3.append(" love ");
    cout << str3 << endl;

    str3.append("game abcde", 4);
    cout << str3 << endl;

//    str3.append(str2);
//    str3.append(str2, 3);
    str3.append(str2, 3, 6); // start count
    cout << str3 << endl;


}


int main()
{
    test01();
    return 0;
}