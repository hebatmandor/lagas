#include <bits/stdc++.h>
using namespace std;
void solve(int N){
    int arr[1000];
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
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
        if(i<N-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    
    
    
}
int main(){
    int N;
    cin >> N;
    solve(N);
}