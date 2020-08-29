#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
void solve(int N){
    int arr[N], modus, m, count=1;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    modus=arr[0];
    for (int i = 0; i < N; i++)
    {
        if(arr[i]>0){
            count = 1;
            for (int j = i+1; j < N; j++)
            {
                if(arr[i]==arr[j]){
                    arr[j] = 0;
                    count++;
                }
            }
            if(count>m){
                m=count;
                modus=arr[i];
            }else{
                if(count==m){
                    if(arr[i]>modus){
                        m=count;
                        modus=arr[i];
                    }
                }    
            }
        }
    }
    cout << modus << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    solve(N);
}