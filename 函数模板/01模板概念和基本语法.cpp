//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;



// 交换整型
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 交换浮点型
void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

template<typename T> // 声明模板，告诉编译器，后面的T别报错，T是通用数据类型
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;

//    swapInt(a, b);
    // 两种方法使用函数模板

    // 1 自动类型推导
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 2 显示类型推导
    mySwap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

//    double c = 1.1;
//    double d = 2.2;
//    swapDouble(c, d);
//    cout << "c = " << c << endl;
//    cout << "d = " << d << endl;
}

int main()
{

    test01();

    return 0;
}