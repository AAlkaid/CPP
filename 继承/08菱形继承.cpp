//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>

using namespace std;


class Animal{
public:
    int m_Age;
};

// 利用虚继承解决菱形继承的问题
// 虚基类
class Sheep:virtual public Animal
{

};

class Tuo:virtual public Animal
{

};

class sheepTuo:public Sheep, public Tuo
{

};

void test01()
{
    sheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 34;
    // 菱形继承的时候，有两个父类拥有相同的数据，需要加以作用域区分

    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

    cout << "st::m_Age = " << st.m_Age << endl;

    //这份数据实际上只要有一份，菱形数据导致数据浪费


}

int main()
{
    test01();
    return 0;
}