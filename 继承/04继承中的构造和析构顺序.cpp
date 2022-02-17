//
// Created by BUZHENYU on 2022/2/4.
//

#include <iostream>
using namespace std;
/**
 * 继承中先调用父类的构造函数，再调用子类构造，析构相反
 * Base 的构造函数
 * Son 的构造函数
 * Son 的析构函数
 * Base 的析构函数
 * **/

class Base
{
public:
    Base()
    {
        cout << "Base 的构造函数" << endl;
    }

    ~Base()
    {
        cout << "Base 的析构函数" << endl;
    }
};

class Son:Base
{
public:
    Son()
    {
        cout << "Son 的构造函数" << endl;

    }

    ~Son()
    {
        cout << "Son 的析构函数" << endl;

    }
};


void test01()
{
    Son s1;
}

int main(){
    test01();
    return 0;
}
