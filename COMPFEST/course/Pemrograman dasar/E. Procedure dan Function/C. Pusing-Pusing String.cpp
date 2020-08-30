#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

void balik(string s, int L, int R, int jml){
    for (int i = R; i >= L; i--)
    {
        s[R] = s[jml];
        jml--;
    }
    cout << endl;
}

void solve(int N, int Q){
    int x, A, B, L, R;
    char wadah;
    string s;
    cin >> s;
    int jml = s.length();
    
    for (int i = 1; i <= Q; i++)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> A >> B;
            wadah = s[A-1];
            s[A-1] = s[B-1];
            s[B-1] = wadah;
        }else if(x==2)
        {
            cin >> L >> R;
            balik(s, L, R, jml);
        }
        
    }
    cout << s << endl;
}

int main(){
    int N, Q;
    cin >> N >> Q;
    solve(N, Q);
}