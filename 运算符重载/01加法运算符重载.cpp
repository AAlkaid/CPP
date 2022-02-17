//
// Created by BUZHENYU on 2022/1/27.
//

#include <iostream>
using namespace std;
/**
 * 加号运算符重载
 *      1.成员函数重载+
 *      2.全局函数重载+
 *
 * 注意：1.内置数据类型是不能重载的;
 *      2.不能滥用
 * */
class person{
public:
    // 1.成员函数重载+
    person operator+(person &p)
    {
        person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

    int m_A;
    int m_B;
};

// 2.全局函数重载
//person operator+(person &p1, person &p2)
//{
//    person temp;
//    temp.m_A = p1.m_A + p2.m_A;
//    temp.m_B = p1.m_B + p2.m_B;
//    return temp;
//}


person operator+(person &p1, int num)
{
    person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
}

void test01()
{
    person p1;
    p1.m_A = 10;
    p1.m_B = 10;

    person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    person p3 = p1.operator+(p2);
//    person p3 = p1 + p2;

    // 运算符重载也可以发生函数重载
    person p4 = p1 + 100;

    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;

    cout << "p4=" << p4.m_A << " " << p4.m_B << endl;

}



int main(){
    test01();
    return 0;
}
