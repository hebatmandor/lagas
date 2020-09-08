#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int A, int B, int C){
    if(pow(A, 2) == pow(B, 2) + pow(C, 2) || pow(B, 2) == pow(A, 2) + pow(C, 2) || pow(C, 2) == pow(B, 2) + pow(A, 2)){
        cout << "Segitiga Siku-Siku" << endl;}
    else if(pow(A, 2) < pow(B, 2) + pow(C, 2) || pow(B, 2) < pow(A, 2) + pow(C, 2) || pow(C, 2) < pow(B, 2) + pow(A, 2)){
        cout << "Segitiga Lancip" << endl;}
    else if(pow(A, 2) > pow(B, 2) + pow(C, 2) || pow(B, 2) > pow(A, 2) + pow(C, 2) || pow(C, 2) > pow(B, 2) + pow(A, 2)){
        cout << "Segitiga Tumpul" << endl;}
}
int main(){
    int a, b, c;
    cout << "Masukkan sisi-sisi segitiga (pisahkan dengan spasi) : "; cin >> a >> b >> c;
    //cout << pow(a, 2) << endl;
    solve(a, b, c);
}