//
// Created by Zybu on 2022/2/17.
//

#include <iostream>
#include <fstream>
using namespace std;


// 读文件
void readFile()
{
    // 1、包含头文件
    // 2、创建流
    ofstream ofs;
    // 3、指定打开方式
    ofs.open("test.txt", ios::out);
    // 4、写内容
    ofs << "1" << endl;
    ofs << "2" << endl;
    ofs << "3" << endl;
    ofs << "4" << endl;
    // 5、关闭文件
    ofs.close();
}

// 写文件
void writeFile()
{
    // 1、包含头文件

    // 2、创建流对象
    ifstream ifs;
    // 3、打开文件，且判断是否打开成功
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    // 4、读数据
    // 4.1
//    char buf[1024] = {0};
//    while ( ifs >> buf)
//    {
//        cout << buf << endl;
//    }

    // 4.2
//    char buf[1024] = {0};
//    while ( ifs.getline(buf, sizeof(buf)) )
//    {
//        cout << buf << endl;
//    }

    // 4.3
//    string buf;
//    while ( getline(ifs, buf) )
//    {
//        cout << buf << endl;
//    }

    // 4.4 （不推荐）
    char c;
    while ( (c = ifs.get()) != EOF ) // end of file 文件尾
    {
        cout << c;
    }
    // 5、关闭文件
    ifs.close();
}

int main()
{
    readFile();
    writeFile();
    return 0;
}

