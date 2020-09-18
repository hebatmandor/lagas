#include <bits/stdc++.h>
using namespace std;
//#define int hasil

int fungsi(int a, int b, int x){
    int hasil;
    hasil = (a * x) + b;
    return hasil;
}

void solve(int a, int b, int k, int x){
    int hasil = 0;
    if(k==0){
        //cout << f(a,b,x) << endl;
        cout << x << endl;
    }else{
        while(k > 1){
            int i = 1;
            hasil = (a * fungsi(a, b, x)) + b;
            k--;
        }
    }
    cout << hasil << endl;
}
int main(){
    int A, B, K, X;
    cin >> A >> B >> K >> X;
    solve(A, B, K, X);
}