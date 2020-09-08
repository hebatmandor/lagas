#include <bits/stdc++.h>
using namespace std;
void solve(int X){
    int tahun, bulan, hari, sisa;
    tahun = X / 365;
    sisa = X % 365;
    bulan = sisa / 30;
    hari = sisa % 30;
    cout << tahun << " Tahun, " << bulan << " Bulan, " << hari << " Hari." << endl;
}
int main(){
    int X;
    cout << "Masukkan jumlah hari : "; cin >> X;
    solve(X);
}