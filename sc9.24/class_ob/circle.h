#pragma once
#include<iostream>
#include"circle.h"
#include"point.h"

using namespace std;

class Circle {
public:
    // 设置半径
    void setR(int r) ;
    // 获取半径
    int getR() ;
    // 设置圆心
    void setCenter(point center) ;
    // 获取圆心
    point getCenter() ;

private:
    int m_R;        // 半径
    point m_Center; // 圆心
};