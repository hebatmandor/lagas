#include <bits/stdc++.h>
using namespace std;
#define db double
void solve(int N){
    db T;
    if(N==1){
        T = 1;
    }
    else{
        T = 1 + floor(N/2) + ceil(N/2);
    }
    cout << T << endl;
}

int main(){
    int N;
    cin >> N;
    if(N>=1)
        solve(N);
}