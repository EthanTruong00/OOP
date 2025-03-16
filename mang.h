#ifndef MANG_H
#define MANG_H
#include <bits/stdc++.h>
using namespace std;

class MangSoNguyen{
    private:
    int n;
    int *arr = new int[n];
    public:
    void Input();
    void Output();
    void AddLastElement();
    void DeleteElement();
    void FindElement();
    void AddRandomLocationElement();
    int Average();
    void SortArr();
};
#endif