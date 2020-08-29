#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string S){
    if(S=="0"){
        cout << "nol" << endl;
    }else if(S=="-"){
        cout << "bilangan bulat negatif" << endl;
    }else if(S=="1-9"){
        cout << "bilangan  bulat positif" << endl;
    }
}

int main(){
    string S;
    cin >> S;
    solve(S);
}