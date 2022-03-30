//
// Created by VINNO on 2022/3/29.
//


#include <iostream>
#include <string>
/**
 * string()
 * string(const char* s)
 * string(const string& str)
 * strinf(int n, char c)
 */

using namespace std;


void test01()
{
    // 几种构造方法
    string s1;

    const char* str = "hello world";
    string s2(str);

    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(10, 'a');
    cout << "s4 = " << s4 << endl;
}

int main()
{
    test01();
    return 0;
}
