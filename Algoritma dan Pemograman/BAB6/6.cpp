#include<bits/stdc++.h>
using namespace std;
void solve(int X){
    X = (X-100) - ((X-100)*0.1);
    cout << "Berat badan ideal\t:\t" << X << endl;
}
int main(){
    int X;
    cout << "Masukkan tinggi badan\t:\t"; cin >> X;
    solve(X);
}