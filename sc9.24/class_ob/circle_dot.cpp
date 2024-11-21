#include <iostream>
using namespace std;
// #include"circle.h"
// #include"point.h"

// 点类
class point {
public:
    // 设置x坐标
    void set_X(int x) {
        m_X = x;
    }
    // 设置y坐标
    void set_Y(int y) {
        m_Y = y;
    }
    // 获取x坐标
    int get_X() {
        return m_X;
    }
    // 获取y坐标
    int get_Y() {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

//圆类
class Circle {
public:
    // 设置半径
    void setR(int r) {
        m_R = r;
    }
    // 获取半径
    int getR() {
        return m_R;
    }
    // 设置圆心
    void setCenter(point center) {
        m_Center = center;
    }
    // 获取圆心
    point getCenter() {
        return m_Center;
    }

private:
    int m_R;        // 半径
    point m_Center; // 圆心
};

// 判断点和圆的关系
void isInCircle(Circle &c, point &p) {
    // 计算两点之间距离的平方
    int distance = (c.getCenter().get_X() - p.get_X()) * (c.getCenter().get_X() - p.get_X()) +
                   (c.getCenter().get_Y() - p.get_Y()) * (c.getCenter().get_Y() - p.get_Y());
    // 计算半径的平方
    int rDistance = c.getR() * c.getR();

    if (distance == rDistance) {
        cout << "点在圆上" << endl;
    } else if (distance > rDistance) {
        cout << "点在圆外" << endl;
    } else {
        cout << "点在圆内" << endl;
    }
}

int main() {
    // 创建圆
    Circle c;
    c.setR(10); // 设置半径为10

    // 设置圆心
    point center;
    center.set_X(0);
    center.set_Y(0);
    c.setCenter(center);

    // 创建点
    point p;
    p.set_X(10);
    p.set_Y(9);

    // 判断点与圆的关系
    isInCircle(c, p);

    return 0;
}
