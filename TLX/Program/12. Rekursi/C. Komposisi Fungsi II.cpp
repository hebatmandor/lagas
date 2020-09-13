#include <bits/stdc++.h>
using namespace std;

int f(int a, int b, int x){
    //cout << endl << abs(((a*x)+b)) << " f" << endl;
    return abs(((a*x)+b));
}

void solve(int a, int b, int k, int x){
    int hasil = 0;
    if(k==0){
        //cout << f(a,b,x) << endl;
        cout << x << endl;
    }else{
        for(int i = k; i > 0; i--){
            hasil = abs(a * f(a, b, x) + b);
        //cout << hasil << " | " << i << " hasil sebelum final" << endl;
        }
        cout << hasil << endl;
    }
}
int main(){
    int A, B, K, X;
    cin >> A >> B >> K >> X;
    solve(A, B, K, X);
}