#include <iostream>
#include <string>
using namespace std;

class MyInteger{
    friend ostream& operator<<(ostream &cout, MyInteger myInteger);
public:
    MyInteger(){
        m_A = 0;
    }

    MyInteger& operator--()
    {
        m_A--;
        return *this;
    }

    MyInteger operator--(int)
    {
        MyInteger temp = *this;
        m_A --;
        return temp;
    }
private:
    int m_A;
};


ostream& operator<<(ostream &cout, MyInteger myInteger)
{
    cout << myInteger.m_A << endl;
    return cout;
}

void test01()
{
    MyInteger myint;

    cout << myint-- << endl;
}


int main() {
    test01();
    return 0;
}
