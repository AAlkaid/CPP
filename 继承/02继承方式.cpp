//
// Created by BUZHENYU on 2022/2/4.
//

#include <iostream>
using namespace std;
/**
 * ----- 父类私有的东西都🙅-----
 * 1、公有继承: 不变
 * 2、保护继承：所有->保护
 * 3、私有权限：所有->私有
 * **/

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

// 公共继承
class Son1:public Base1
{
public:
    void func()
    {
        m_A = 10; // 父类中公共权限到子类中还是公共的
        m_B = 10; // 父类中保护权限的成员到子类中依然是保护权限
        m_C = 10; // 父类中的私有权限成员，子类访问不到
    }
};

// 保护继承
class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son2:protected Base2
{
public:
    void func(){
        m_A = 100; // public --- > protected
        m_B = 100; // protected --- > protected
        m_C = 100;
    }
};


void test01()
{
    Son1 s1;
    s1.m_A = 100; // 公共权限类外也可以访问
//    s1.m_B = 100; // 保护权限类外访问不到啊

}

void test02()
{
    Son2 s1;
    s1.m_A; // protected
    s1.m_B; // protected
}

class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son3:private Base3
{
public:
    void func()
    {
        m_A = 100; // public ---> private
        m_B = 100; // protected ---> private
        m_C = 100;
    }
};

void test03()
{
    Son3 s1;
    s1.m_A = 100; //private
    s1.m_B = 100; //private
}


class GrandSon3:public Son3
{
public:
    void func()
    {
        m_A = 1000;
        m_B = 1000;
    }
};
int main(){

    return 0;
}
