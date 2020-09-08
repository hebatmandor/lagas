#include <bits/stdc++.h>
using namespace std;
void solve(int N, int M){
    long long a, b;
    if(N/M <= 5){
        //cout << N/M << "Nilai N/M" << endl;
        if(N%M!=0){
            //cout << N%M << "Nilai N%M " << endl;
            a = 0;
            int i = 0;
            while(N>5){
                N=N-5; //cout << N << "Nilai N " << endl;
                i++; //cout << i << "nilai i " << endl;
                b = i; 
            }
        }else{
            if(N/M==5){
                a = b = M;
            }else{
                int i=0, a = 0;
                while(N>5){
                    N=N-5; //cout << N << "Nilai N " << endl;
                    i++; //cout << i << "nilai i " << endl;
                    b = i;
                }
            }
        }
    }else{
        a = b = -1;
    }
    cout << a << " " << b << endl;
}
int main(){
    int N, M;
    cin >> N >> M;
    solve(N,M);
}