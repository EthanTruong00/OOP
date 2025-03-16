#include "point.h"

int mian(){
    Point p1, p2;
    cout << "Nhap toa do diem thu nhat: \n";
    p1.Input();
    cout << "Nhap toa do diem thu hai: \n";
    p2.Input();

    float dx, dy;
    cout << "Nhap vector di chuyen: \n";
    cin >> dx >> dy;
    p1.Move(dx, dy);
    p2.Move(dx, dy);
    
    cout << "Hai diem vua nhap: \n";
    p1.Output();
    cout << endl;
    p2.Output();
    cout << endl;

    cout << "Khgoang cach giua hai diem vua nhap: ";
    cout << fixed << setprecision(5) << p1.Distance(p2);
    cout << endl;

    cout << "Toa do hai diem sau khi tinh tien theo vector: \n";
    p1.Output();
    cout << endl;
    p2.Output();
    return 0;
}