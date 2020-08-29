#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int N, int M, int P){
    int arA[100][100], arB[100][100], arC[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arA[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; i < P; i++)
        {
            cout << arB[i][j];
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < P; i++)
        {
            /* code */
        }
        
    }
    
    
}

int main(){
    int N, M, P;
    cin >> N >> M >> P;
    solve(N, M, P);
}