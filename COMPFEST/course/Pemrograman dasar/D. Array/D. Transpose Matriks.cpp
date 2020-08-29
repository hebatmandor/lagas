#include <bits/stdc++.h>
using namespace std;


void solve(int M, int N){
    int ar[100][100];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << ar[j][i];
            if(j<M-1){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
    
    
}

int main(){
    int M, N;
    cin >>  M >> N;
    solve(M, N);
}