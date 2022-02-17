//
// Created by BUZHENYU on 2022/1/27.
//
#include <iostream>
using namespace std;
// 递增运算符重载
// 作用：实现自己的整型变量
// 前置递增返回的是引用，后置递增返回的是值。


class MyInterger{
    friend ostream & operator<<(ostream &cout, MyInterger myint);
public:
    MyInterger(){
        m_Num = 0;
    }
// 重载前置++运算符
    MyInterger& operator++()
    {
        // 属性递增
        m_Num++;
        // 再解引用
        return *this;
    }

// 重载++后置运算符
// int代表站位，用来区分前后运算符
    MyInterger operator++(int)
    {
        // 先干嘛：记录当时结果
        MyInterger temp = *this;
        // 后干嘛：递增
        m_Num ++;
        // 返回结果
        return temp;
    }

private:
    int m_Num;
};


ostream & operator<<(ostream &cout, MyInterger myint)
{
    cout << myint.m_Num << endl;
    return cout;
}



void test01(){
    MyInterger myint;

    cout << ++myint << endl;
}

void test02()
{
    MyInterger myint;

    cout << myint++ << endl;
    cout << myint << endl;
}

int main(){
//    test01();
    test02();
    return 0;
}
