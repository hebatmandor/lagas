#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll bil){
    if(bil>=0 && bil%4==0){
        cout << "Bilangan Positif, kelipatan 4" << endl;
    }else if(bil >= 0){
        cout << "Bilangan positif" << endl;
    }else{
        cout << "Bukan bilangan positif" << endl;
    }
}
int main(){
    ll a;
    cout << "Masukkan bilangan\t: "; cin >> a;
    solve(a);
}