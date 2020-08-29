#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
        for (int j = M-1; j >= 0; j--)
        {
            cout << ar[j][i];
            if (j==0){
                cout << endl; 
            }else{
                cout << " ";
            }
        }
    }
}

int main(){
    int M, N, ar[100][100];
    cin >> M >> N;
    solve(M, N);   
}