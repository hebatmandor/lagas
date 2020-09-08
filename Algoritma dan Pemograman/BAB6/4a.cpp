#include<bits/stdc++.h>
using namespace std;
void solve(int X){
    int km, m, cm;
    km = X / 100000;
    X = X % 100000;
    m = X / 1000;
    cm = X % 1000; 
    cout << km << " km, " << m << " m, " << cm << " cm." << endl;
}
int main(){
    int X;
    cout << "Masukkan panjang perjalanan semut(cm)\t: "; cin >> X;
    solve(X);
}