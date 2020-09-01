#include <bits/stdc++.h>
using namespace std;

void solve(int N, int K){
    //cout << abs(-2 + -3) << endl;
    int ar[2*N], klp=0;
    for (int i = 0; i < 2*N; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < 2*N; i++)
    {
        for (int j = i+1; j <= 2*N; j++)
        {
            if(klp >=3){
                break;
            }else{
                //cout << ar[i] << " - " <<ar[j] << " = " << abs(ar[i]-ar[j]) << endl;
                if(abs(ar[i] - ar[j]) <= K){
                klp++;
                }
            }
        }
    }
        
    if(klp>=3)
        cout << "Ya" << endl;
    else
        cout << "Tidak" << endl;
    
}
int main(){
    int N, K;
    cin >> N >> K;
    solve (N, K);
}