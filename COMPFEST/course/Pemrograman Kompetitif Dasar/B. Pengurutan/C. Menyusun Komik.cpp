#include <bits/stdc++.h>
using namespace std;
void solve(int N){
    int arr[1000], tot=0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                tot++;
            }
        }
    }
    cout << tot << endl;
}
int main(){
    int N;
    cin >> N;
    solve(N);
}