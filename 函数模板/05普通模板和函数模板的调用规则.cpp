//
// Created by VINNO on 2022/3/22.
//

#include <iostream>
using namespace std;
/**
 * ��ͨ�����ͺ���ģ��ĵ��ù���
 * 1���������������ʵ�֣����ȵ�����ͨ����
 * 2������ͨ���ղ����б�ǿ�Ƶ��ú���ģ��
 * 3������ģ��Ҳ���Է�������
 * 4���������ģ��ƥ��ĸ��ã���ô�͵��ú���ģ��
 */


void myPrint(int a, int b)
{
    cout << "call ��ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
    cout << "call ����ģ��" << endl;
}

template<class T>
void myPrint(T a, T b, T c) // ��������
{
    cout << "call ���غ���ģ��" << endl;
}

void test01()
{
    int a = 10, b = 20;

//    myPrint(a, b);

    // ��ģ������б�ǿ�Ƶ��ú���ģ����
    myPrint<>(a, b);

//    myPrint(a, b, 19);

    // �������ģ��������õ�ƥ�䣬���ȿ��Ǻ���ģ��
    // ��Ϊ��ͨ��������Ҫ������ʽ����ת����̫�鷳��
//    char c1 = 'a';
//    char c2 = 'b';
//
//    myPrint(c1, c2);
}

int main()
{
    test01();
    return 0;
}