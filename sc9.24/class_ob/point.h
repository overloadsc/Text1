#pragma once
#include <iostream>
using namespace std;
class point 
{
public:
    // 设置x坐标
    void set_X(int x);
    // 设置y坐标
    void set_Y(int y);
    // 获取x坐标
    int get_X() ;
    // 获取y坐标
    int get_Y() ;

private:
    int m_X;
    int m_Y;
};