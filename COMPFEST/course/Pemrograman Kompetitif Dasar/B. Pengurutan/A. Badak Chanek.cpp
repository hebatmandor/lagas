#include <bits/stdc++.h>
using namespace std;

void solve(int N, int Q){
    int ara[1000], x, arb[1000];
    for (int i = 1; i <= N; i++)
    {
        cin >> ara[i];
    }
    for (int i = 1; i <= N; i++){
        for (int j = i+1; j <= N; j++){
            if (ara[i] > arb[j]){
                int temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    for (int i = 1; i <= Q; i++){
        cin >> x;
        cout << ara[x] << endl;
    }
}
int main(){
    int N, Q;
    cin >> N >> Q;
    solve(N, Q);
}