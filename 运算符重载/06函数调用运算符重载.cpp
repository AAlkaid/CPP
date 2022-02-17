//
// Created by BUZHENYU on 2022/1/27.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(int mid, vector<int> &nums)
{
    // 如果mid是奇数
    if (mid & 1)
    {
        if (nums[mid] == nums[mid-1])
            return true;
        else
            return false;
    }
    else
    {
        if ( )
    }
}



// ()也可以重载,函数调用运算符重载
// 也叫做 仿在函数


class MyPrint{
public:
    //重载的函数调用运算符
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void MyPrint02(string test)
{
    cout << test << endl;
}

void test01()
{
    MyPrint myprint;

    myprint("hello world!");

    MyPrint02("Hel");
}

// 仿函数特别灵活，没有特别的写法


// 加法类
class MyAdd{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test02()
{
    MyAdd myadd;
    int res = myadd(100, 100);

    cout << "res = " << res << endl;

    //匿名对象
    cout << MyAdd()(100, 100) << endl;
}


int main(){
    cout << (new MyAdd())->operator()(1, 2) << endl;
    test01();
    test02();//2147483648
    cout << "--------" << endl;
//    cout << 1 << ~1 << endl;
    cout << (1 & 1) << endl;
    cout << (2 & 1) << endl;
    cout << (3 & 1) << endl;
    cout << (4 & 1) << endl;


    return 0;
}
