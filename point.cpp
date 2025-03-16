#include "point.h"

    void Point::Input(){
        cout << "Input x: ";
        cin >> x;
        cout << "Input y; ";
        cin >> y;
    }
    void Point::Output(){
        cout << "(" << x << "," << y << ")";
    }
    void Point::Move(float dx, float dy){
        x+= dx;
        y+= dy;
    }
    float Point::Distance(Point other){
        float dx = x - other.x;
        float dy = y - other.y;
        return sqrt(dx*dx + dy*dy);
    }