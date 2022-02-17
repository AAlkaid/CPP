//
// Created by BUZHENYU on 2022/2/4.
//

#include <iostream>
using namespace std;

class BasePage
{
public:
    void header(){
        cout << "公共的头部信息" << endl;
    }

    void footer(){
        cout << "公共的底部信息" << endl;
    }

    void left(){
        cout << "公共的左侧信息" << endl;
    }

};

//python
class Python : public BasePage
{
public:
    void content()
    {
        cout << "java" << endl;
    }
};

class CPP : public BasePage
{
public:
    void content(){
        cout << "cpp" << endl;
    }
};

void test01(){
    CPP ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    cout << "----------------------------" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
}

int main(){
    test01();
    return 0;
}
