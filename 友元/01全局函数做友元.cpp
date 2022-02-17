//
// Created by BUZHENYU on 2022/1/27.
//

#include <iostream>
#include <string>

using namespace std;

// 建筑物类
class Building
{
public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom;


private:
    string m_BedRoom;
};

//全局函数
void goodGuy(Building *building)
{
    cout << "全局函数" << building->m_SittingRoom << endl;
}

void test01()
{
    Building building;
    goodGuy(building);
}

int main()
{
    test01();
    return 0;
}
