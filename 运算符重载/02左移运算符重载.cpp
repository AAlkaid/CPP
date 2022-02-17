//
// Created by BUZHENYU on 2022/1/27.
//
/**
 * 左移运算符重载
 * */
#include <iostream>
using namespace std;

class person
{
    friend ostream & operator<<(ostream &cout, person &p);

public:
    person(int a, int b){
        m_A = a;
        m_B = b;
    }
private:

    // 1.利用成员函数重载左移运算符
    // p.operator<<(cout) p << cout
    // 按道理应该是cout << p
    // 因此一般不会使用成员函数来重载左移运算符
    // 因为无法实现cout在左侧
//    void operator<<( cout )
//    {}
    int m_A;
    int m_B;
};

// 2.只能利用全局函数来重载<<

ostream & operator<<(ostream &cout, person &p) //本质cout << p
{
    cout << "m_A = " << p.m_A << ", m_B = " << p.m_B << endl;
    return cout;
}

void test01(){
    person p(10, 10);

    cout << p << endl << "chain rule";
}

int main(){
    test01();
    return 0;
}