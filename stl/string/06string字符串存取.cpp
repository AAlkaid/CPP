//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>
using namespace  std;

/**
 * 字符存取
 * []
 * at
 */


void test01()
{
    string str = "hello";

    cout << "str = " << str << endl;


    // []

    for (int i = 0; i < str.size(); i ++)
    {
        cout << str[i] << " ";
    }


    cout << endl;

    // at

    for (int i = 0; i < str.size(); i ++)
    {
        cout << str.at(i) << " ";
    }

    cout << endl;

    // replace
    str[0] = 'a';
    cout << str << endl;

    str.at(1) = 'x';
    cout << str << endl;

}

int main()
{
    test01();
    return 0;
}