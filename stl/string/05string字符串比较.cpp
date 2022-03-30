//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>

using namespace  std;
/**
 * ASCII 字符串比较
 * > 1
 * < -1
 * = 0
 * @return
 */

void test01()
{
    string str1 = "hello";
    string str2 = "hellz";

    if (str1.compare(str2) == 0)
    {
        cout << "=" << endl;
    } else if (str1.compare(str2) == 1)
    {
        cout << ">" << endl;
    }else if (str1.compare(str2) == -1)
    {
        cout << "<" << endl;
    }
}

int main()
{
    test01();
    return 0;
}