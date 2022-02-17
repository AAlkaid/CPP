//
// Created by BUZHENYU on 2022/2/15.
//

#include <iostream>
using namespace std;
// 电脑组装案例

class CPU
{
public:
    virtual void calculate() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage()  = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    void work()
    {
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    //  提供析构函数释放
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }

        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }

        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }

private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};


class IntelCpu:public CPU
{
    virtual void calculate()
    {
        cout << "Intel的cpu开始计算了！" << endl;
    }
};

class IntelVideoCard:public VideoCard
{
    virtual void display()
    {
        cout << "Intel的显卡开始显示了！" << endl;
    }
};

class IntelMemory:public Memory
{
    virtual void storage()
    {
        cout << "Intel的内存条开始存储了！" << endl;
    }
};



class LenovoCpu:public CPU
{
    virtual void calculate()
    {
        cout << "Lenovo的cpu开始计算了！" << endl;
    }
};

class LenovoVideoCard:public VideoCard
{
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示了！" << endl;
    }
};

class LenovoStorage:public Memory
{
    virtual void storage()
    {
        cout << "Lenovo的内存条开始存储了！" << endl;
    }
};

void test01()
{
    // 第一台电脑零件
    CPU *intelCpu = new IntelCpu;
    VideoCard *intelcard = new IntelVideoCard;
    Memory *mem = new IntelMemory;

    // 创建第一台电脑
    Computer *computer1 = new Computer(intelCpu, intelcard, mem);
    computer1->work();

    delete computer1;


    // 组装第二台电脑
    cout << "-------第二台电脑--------" << endl;
    Computer *computer2 = new Computer(new LenovoCpu, new LenovoVideoCard, new IntelMemory);
    computer2->work();
    delete computer2;



}

int main()
{
    test01();
    return 0;
}