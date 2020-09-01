#include <bits/stdc++.h>
using namespace std;
void perkalian(int M, int N, int O){
    int arA[101][101], arB[101][101], arC[101][101];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arA[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < O; j++)
        {
            cin >> arB[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < O; j++)
        {
            arC[i][j]=0;
            for (int k = 0; k < N; k++)
            {
                arC[i][j] = arC[i][j] + arA[i][k] * arB[k][j];
            }   
        }
    }
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < O; j++)
        {
            cout << arC[i][j];
            if(j < O -1){
                cout << " ";
            }
        }
        cout << endl;
    }
    
    
}
int main(){
    int M, N, O;
    cin >> M >> N >> O;
    perkalian(M, N, O);
}