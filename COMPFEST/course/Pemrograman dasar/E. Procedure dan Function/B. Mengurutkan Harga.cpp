#include <bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
void solve(int N){
    int arr[100], temp;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = i+1; j <= N; j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                cout << i << " " << j << endl;
            }
        }
        
    }
    
}
int main(){
    int N;
    cin >> N;
    solve(N);
}