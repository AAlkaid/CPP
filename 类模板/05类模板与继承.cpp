//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
#include <cxxabi.h>
using namespace std;

/**
 * 类模板碰到继承
 * 1、当子类继承的父类是个类模板的时候，子类在声明的时候，要指定出父类中T的类型
 * 2、不指定编译器无法给子类分配内存
 * 3、如果想灵活指定父类中T的类型，子类也需要变为类模板。
 * @tparam T
 */

template<class T>
class Base
{
    T m;
};

//class Son:public Base // 必须要知道T的类型
class Son:public Base<int>
{

};

void test01()
{
    Son s1;
}


// 如果想灵活指定父类中T类型，子类也要变为模板
template<class T1, class T2>
class Son2:public Base<T2>
{

public:
    Son2()
    {
        cout << "t1 type: " << abi::__cxa_demangle(typeid(T1).name(), 0, 0, 0) << endl;
        cout << "t2 type: " << abi::__cxa_demangle(typeid(T2).name(), 0, 0, 0) << endl;

    }
    T1 obj;
};


template<class T>
class Son3:public Base<T>
{
    T name;
public:
    Son3()
    {
        cout << "t1 type: " << abi::__cxa_demangle(typeid(T).name(), 0, 0, 0) << endl;
    }
};

void test02()
{
    Son2<int,char> s2; //char是父类
}

void test03()
{
    Son3<char> a3;
}

int main()
{
    test03();
    return 0;
}