#include "mang.h"

void MangSoNguyen::Input() {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    arr = new int[n];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void MangSoNguyen::Output() {
    cout << "Cac phan tu trong mang: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void MangSoNguyen::AddLastElem() {
    int x;
    cout << "Nhap phan tu can them: ";
    cin >> x;
    int* newArr = new int[n + 1];
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    newArr[n] = x;
    delete[] arr;
    arr = newArr;
    n++;
}

void MangSoNguyen::DeleteElem() {
    int pos;
    cout << "Nhap vi tri can xoa: ";
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Vi tri khong hop le!\n";
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    int* newArr = new int[n];
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}



void MangSoNguyen::FindElem() {
    int x;
    cout << "Nhap phan tu can tim: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Tim thay tai vi tri: " << i << "\n";
            return;
        }
    }
    cout << "Khong tim thay phan tu!\n";
}

void MangSoNguyen::AddRandomLocElem() {
    int x, pos;
    cout << "Nhap phan tu can them: ";
    cin >> x;
    cout << "Nhap vi tri can chen: ";
    cin >> pos;
    if (pos < 0 || pos > n) {
        cout << "Vi tri khong hop le!\n";
        return;
    }
    int* newArr = new int[n + 1];
    for (int i = 0; i < pos; i++) {
        newArr[i] = arr[i];
    }
    newArr[pos] = x;
    for (int i = pos; i < n; i++) {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    n++;
}

int MangSoNguyen::Average() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (n == 0) ? 0 : sum / n;
}

void MangSoNguyen::SortArr() {
    sort(arr, arr + n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}