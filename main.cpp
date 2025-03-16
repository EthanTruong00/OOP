#include "mang.h"

int main(){
    MangSoNguyen m;
    m.Input();
    m.Output();
    m.AddLastElement();
    m.Output();
    m.DeleteElement();
    m.Output();
    m.FindElement();
    m.AddRandomLocationElement();
    m.Output();
    cout << "Trung binh cong: " << m.Average() << "\n";
    m.SortArr();
    return 0;
}