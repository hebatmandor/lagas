#include <bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
void solve(int N){
    ll  T;
    if(N==1){
        T = 1;
    }
    else{
        T = 1 + ceil(N/2) + floor(N/2);
    }
    cout << T << endl;
}

int main(){
    int N;
    cin >> N;
    if(N>1)
        solve(N);
    else if(N==1)
        cout << 1 << endl;
}