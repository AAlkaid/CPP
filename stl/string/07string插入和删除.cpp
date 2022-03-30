//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>
using namespace  std;

/**
 * 字符串插入和删除
 * @return
 */

void test01()
{
    string str = "hello";

    // insert

    str.insert(1, "111");
    cout << str << endl;

    // delete
    str.erase(1, 3);
    cout << str << endl;

}


int main()
{
    test01();
    return 0;
}