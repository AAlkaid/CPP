//
// Created by VINNO on 2022/3/29.
//

#include <iostream>
#include <string>

using namespace std;
/**
 * ���Һ��滻 find rfind
 */

// 1 ����
void test01()
{
    string str1 = "abcdefgde";

    int pos = str1.find("de");

    if (pos == -1)
        cout << "δ�ҵ��Ӵ�" << endl;
    else
        cout << "pos = " << pos << endl;



    // rfind ���𣬴�������
    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;
}


void test02()
{
    string str1 = "abcdedg";

    // ��1��λ�ã�3���ַ��滻��1111
    str1.replace(1, 3, "1111");

    cout << str1 << endl;


}

int main()
{
//    test01();
    test02();
    return 0;
}