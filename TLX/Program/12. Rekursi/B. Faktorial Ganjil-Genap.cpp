#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int fak=1;
    for (int i = n; i > 0; i--)
    {
        if(i%2==0){
            fak*=i/2;
        }else{
            fak*=i;
        }
    }
    cout << fak << endl;
}
int main(){
    int N;
    cin >> N;
    solve(N);
}