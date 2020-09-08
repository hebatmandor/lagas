#include <bits/stdc++.h>
using namespace std;
void solve(int X){
    int a, b, c , d, e, sisa;
    if(X%25==0){
        a = X / 1000;
        sisa = X % 1000;
        b = sisa / 500;
        sisa = sisa % 500;
        c = sisa / 100;
        sisa = sisa % 100;
        d = sisa / 50;
        e = sisa % 50;
    }
    cout << a << " pecahan Rp.1000, " << b << " pecahan Rp.500, " << c << " pecahan Rp. 100, " << d << " pecahan Rp. 50, " << e << " pecahan Rp. 25." << endl;
}
int main(){
    int X;
    cout << " Masukkan nilai uang : "; cin >> X;
    solve(X);
}