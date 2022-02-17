//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
#include <string>
using namespace std;

// NOTION：
// 1、虚析构或者纯虚析构就是用来解决通过父类指针释放子类对象
// 2、如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
// 3、拥有纯虚析构函数的类也属于抽象类，没办法实例化对象。

class Animal
{
public:
    Animal()
    {
        cout << "Animal构造函数调用" << endl;
    }
    // 利用虚析构，可以解决父类指针释放子类对象不干净的问题
//    virtual ~Animal()
//    {
//        cout << "Animal析构函数调用" << endl;
//    }

    // 纯虚析构
    // 有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};

Animal::~Animal()
{
    cout << "Animal纯虚析构函数调用" << endl;
}

class Cat:public Animal
{
public:

    Cat(string name)
    {
        cout << "cat构造函数调用" << endl;
        m_Name = new string(name);
    }
    virtual void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }
    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "cat析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
    string *m_Name;
};

void test01()
{
    Animal * animal = new Cat("Tom");
    animal->speak();
    // 父类指针在析构的时候不会调用子类的析构函数
    // 如果子类有堆区属性，出现内存泄漏
    delete animal;
}

int main()
{
    test01();
    return 0;
}