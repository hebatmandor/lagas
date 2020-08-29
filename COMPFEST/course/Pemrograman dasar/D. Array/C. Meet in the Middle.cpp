// belomm selesai !!!!

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int N){
    int arr[101];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
        if(i<N-1){
            cout << " " << arr[N-1];
        }
        N--;
        if(i<N-1){
            cout << " ";
        }
    }
    cout <<  endl;

}

int main(){
    int N;
    cin >> N;
    solve(N);
}