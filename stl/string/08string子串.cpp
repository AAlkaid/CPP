//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>
using namespace  std;

/**
 * 子串获取
 * @return
 */

void test01()
{
    string str = "abcdefg";

    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;
}


void test02()
{
    string email = "hello@sina.com";

    // find name

    int pos = email.find('@');

    cout << pos << endl;

    string name = email.substr(0, pos);

    cout << name << endl;
}
int main()
{
    test02();
    return 0;
}