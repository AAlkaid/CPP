//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
using namespace std;
// 多态的案例2

class AbstractDrink
{
public:
    virtual void Boil() = 0;

    virtual void Brew() = 0;

    virtual void PourInCup() = 0;

    virtual void PutSomething() = 0;

    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee:public AbstractDrink
{
public:
    virtual void Boil()
    {
        cout << "煮水coffee" << endl;
    }

    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }

    virtual void PourInCup()
    {
        cout << "倒入杯子" << endl;
    }

    virtual void PutSomething()
    {
        cout << "加入糖喝牛奶" << endl;
    }
};

class Tea:public AbstractDrink
{
public:
    virtual void Boil()
    {
        cout << "煮水tea" << endl;
    }

    virtual void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }

    virtual void PourInCup()
    {
        cout << "倒入杯子" << endl;
    }

    virtual void PutSomething()
    {
        cout << "加入柠檬" << endl;
    }
};

//void doWork(AbstractDrink * abs)
//{
//    abs->makeDrink();
//    delete abs;
//}

void test01()
{

    AbstractDrink *abs = new Coffee;

    abs->makeDrink();

    delete abs;

    cout << "-----------" << endl;

    abs = new Tea;

    abs->makeDrink();

    delete abs;
}

int main()
{
    test01();
    return 0;
}