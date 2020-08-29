#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int X){
    int tot=0;
    for (int i = 1; i <= X; i++)
    {
        if ( X % i == 0){
            tot+=i;
            tot+=X/i;
        }
    }
    cout << tot << endl;
}

int main(){
    int X;
    cin >> X;
    solve(X);
}
