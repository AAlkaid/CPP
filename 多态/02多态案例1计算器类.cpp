//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
#include <string>
using namespace std;
// 计算器类实现


// 1、普通写法
class Calculator{
public:
    int getResult(string oper)
    {
        if (oper == "+")
            return m_Num1 + m_Num2;
        else if (oper == "-")
            return m_Num1 - m_Num2;
        else if (oper == "*")
            return m_Num1 * m_Num2;
        // 如果想扩展新的运算，得修改源码、
        // 在真实的开发中，提倡开闭原则
        // 对扩展进行开放，对修改进行关闭
    }

    int m_Num1;
    int m_Num2;
};
// 2、多态写法
// 多态带来的好处：
//  - 组织清晰
//  - 可读性强
//  - 对于前期和后期扩展以及维护性高
class AbstractCalculator
{
public:
    virtual int getResult()
    {

    }

    int m_Num1;
    int m_Num2;
};

// AddCalculator
class AddCalculator:public AbstractCalculator
{
public:
    virtual int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

// SubCalculator
class SubCalculator:public AbstractCalculator
{
public:
    virtual int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

// MulCalculator
class MulCalculator:public AbstractCalculator
{
public:
    virtual int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

void test01()
{
    // 创建计算器对象
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;

    cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
    cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
    cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;

}

void test02()
{
     AbstractCalculator * abc = new AddCalculator; // 堆区，用完记得销毁
     abc->m_Num1 = 100;
     abc->m_Num2 = 100;

     cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
     delete abc; // 销毁，释放了堆区数据而已，指针的类型没有变

     abc = new SubCalculator;
     abc->m_Num1 = 100;
     abc->m_Num2 = 100;
     cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
     delete abc;

     abc = new MulCalculator;
     abc->m_Num1 = 100;
     abc->m_Num2 = 100;
     cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
     delete abc;


}

int main()
{
    test01();
    cout << "---------------" << endl;
    test02();
    return 0;
}
