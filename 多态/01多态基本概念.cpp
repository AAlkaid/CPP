//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
using namespace std;


/**
 * 动态多态满足条件
 * 1、有继承关系
 * 2、子类要重写父类的虚函数
 *
 * 动态多态的使用：
 * 父类的指针或者引用 执行子类对象
 * **/

// 多态

class Animal
{
public:

    // virtual function pointer (vfptr) 指向虚函数表(vftable)
    // 表的内部记录一个虚函数的地址
    // &Animal::Speak

    virtual void speak()
    {
        cout << "animal is speaking." << endl;
    }
};


class Cat:public Animal
{
public:

    // 虚函数
    /**
     * 重写：函数的（返回值类型、函数名、参数列表完全相同）
     * 子类的关键词virtual可写可不写
     * **/
    void speak()
    {
        cout << "Cat is speaking." << endl;
    }
};

class Dog:public Animal
{
public:
    // 从animal继承得来：vfptr指向虚函数表 &Animal::Speak
    // 当子类重写了父类的虚函数
    // 那么子类的虚函数表内部会替换成子类的虚函数地址。 &Dog::Speak

    void speak()
    {
        cout << "Dog is speaking." << endl;
    }
};

/**
// 执行说话的函数
// 在编译阶段确定函数的地址，属于地址早绑定。
// 如果想执行让猫说话，那么地址就不可以提前绑定
// 需要在运行阶段绑定
 * **/

void doSpeak(Animal &animal) //Animal的引用==cat
{
    animal.speak();
}

void test01()
{
    Cat cat;
    // 当父类的指针或者引用指向子类对象的时候，发生了多态。
    doSpeak(cat);

    Dog dog;
    // 当父类的指针或者引用指向子类对象的时候，发生了多态。
    doSpeak(dog);
}

void test02()
{
    cout << "Size of animal = " << sizeof(Animal) << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}

