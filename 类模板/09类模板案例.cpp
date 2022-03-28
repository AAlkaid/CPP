//
// Created by VINNO on 2022/3/23.
//

#include <iostream>
#include "MyArray.hpp"
using namespace std;

void printIntArray(MyArray<int> &arr)
{
    for (int i = 0; i < arr.getSize(); i ++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{
    MyArray<int> arr1(5);

    for (int i = 0; i < 5; i ++)
    {
        // 尾插法
        arr1.push_back(i);
    }

    cout << "array1的打印输出为：" << endl;
    printIntArray(arr1);

    cout << "array1的容量为：" << arr1.getCapacity() << endl;
    cout << "array1的大小为：" << arr1.getSize() << endl;

    // 拷贝构造函数
    MyArray<int> arr2(arr1);
    cout << "array2的打印输出为：" << endl;
    printIntArray(arr2);

    // delete
    arr2.Pop_Back();
    cout << "array2的容量为：" << arr2.getCapacity() << endl;
    cout << "array2的大小为：" << arr2.getSize() << endl;


//    MyArray<int> arr2(arr1);
//
//    MyArray<int> arr3(100);
//    arr3 = arr1;
}

// 测试自定义数据类型
class Person{
public:
    Person(){};

    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

void printPersonArray(MyArray<Person> &arr)
{
    for (int i = 0; i < arr.getSize(); i ++)
    {
        cout << " name : " << arr[i].m_Name << " age : " << arr[i].m_Age << endl;
    }
}

void test02()
{
    MyArray<Person> arr(10);
    Person p1("p1", 11);
    Person p2("p2", 12);
    Person p3("p3", 13);
    Person p4("p4", 14);
    Person p5("p5", 15);

    // 将数据插入到数组中
    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    arr.push_back(p5);

    // 打印数组
    printPersonArray(arr);


}



int main()
{
//    test01();
    test02();
    return 0;
}