//
// Created by BUZHENYU on 2022/2/4.
//

#include <iostream>
using namespace std;
// 继承中的对象模型

class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son:public Base
{
public:
    int m_D;
};

void test01()
{
    // 私有的也被继承了，也只是访问不到而已
    cout << "Size of son :" << sizeof(Son) << endl;
}

int main(){
    test01();
    return 0;
}
