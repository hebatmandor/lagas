#include <bits/stdc++.h>
using namespace std;
void solve(int N, int Q){
    int arr[1000], x;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= Q; i++)
    {
        cin >> x;
        if(x<=N){
            cout << arr[x] << endl;
        }else
        {
            continue;
        }   
    }
}
int main(){
    int N, Q;
    cin >> N >> Q;
    solve(N, Q);
}