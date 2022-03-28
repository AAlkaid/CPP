//
// Created by VINNO on 2022/3/28.
//

#pragma once
#include <iostream>
using namespace std;


template<class T>
class MyArray
{
public:
    // 有参构造， 参数：容量
    MyArray(int capacity)
    {
        cout << "打印了有参构造！" << endl;
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    // 拷贝构造函数
    MyArray(const MyArray& arr)
    {
        cout << "打印了拷贝构造！" << endl;
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
//        this->pAddress = arr.pAddress;// 指针不能这样弄，要深拷贝
        this->pAddress = new T[arr.m_Capacity];

        // 将array中的数据都拷贝过来
        for (int i = 0; i < this->m_Size; i ++)
            this->pAddress[i] = arr.pAddress[i];
    }

    // operator= 防止浅拷贝 a = b = c返回引用
    MyArray& operator=(const MyArray& arr)
    {
        cout << "打印了operator！" << endl;
        // 先判断原来堆区是否有数据，有的话先释放
        if (this->pAddress != nullptr)
        {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }


        // 深拷贝
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];

        for (int i = 0; i < this->m_Size; i ++)
            this->pAddress[i] = arr.pAddress[i];

        return *this;
    }

    // 尾插
    void push_back(const T &val)
    {
        // 判断容量是否等于大小，满没满
        if (this->m_Capacity == this->m_Size) return;

        this->pAddress[this->m_Size] = val; // 末尾插入
        this->m_Size ++; // 更新数组大小
    }

    // 尾删法
    void Pop_Back()
    {
        // 让用户访问不到最后一个元素，就是尾删法，逻辑上的删除方式
        if (this->m_Size == 0) return; // 空了就返回

        this->m_Size --;
    }

    // 通过下标访问数组中的元素
    // 重载 a[0] = 100

    T& operator[](int index)
    {
        return this->pAddress[index];
    }

    // 返回数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }


    // 返回数组的大小
    int getSize()
    {
        return this->m_Size;
    }

    // 析构函数
    ~MyArray()
    {
        cout << "打印了析构！" << endl;
        if (this->pAddress != nullptr)
        {
            delete[] this->pAddress;
            this->pAddress = nullptr;
        }
    }
private:
    T *pAddress; // 指针指向堆区开辟的真实的数组

    int m_Capacity; // 数组容量

    int m_Size; // 数组大小
};