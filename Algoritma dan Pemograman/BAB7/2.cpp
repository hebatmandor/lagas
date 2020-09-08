#include<bits/stdc++.h>
using namespace std;
void solve(int a){
    a = a - (0.1*a);
    cout << "Diskon 10%, grand total\t: " << a << endl; 
}
int main(){
    int a;
    cout << "Masukkan total belanja\t: "; cin >> a;
    solve(a);
}