#include <bits/stdc++.h>
using namespace std;

void solve(string s, int X){
    if(s == "next"){
        if(X==0)
            X=99;
        else
            X--;
    }else if(s == "prev")
        if(X == 99)
            X=0;
        else
            X++;
    cout << X << endl;
}

void ujikasus(int T){
    int X;
    string s;
    for (int i = 0; i < T; i++)
    {
        cin >> s;
        cin >> X;
        solve(s, X);
    }
}

int main(){
    int T;
    cin >> T;
    ujikasus(T);
}