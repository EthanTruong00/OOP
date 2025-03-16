#ifndef POINT_H
#define POINT_H
#include <bits/stdc++.h>

using namespace std;

class Point{
    private:
    float x;
    float y;
    public:
    void Input();
    void Output();
    void Move(float dx, float dy);
    float Distance(Point other);

};
#endif