#include <iostream>
using namespace std;
int main(){
    int N, Q;
    cin >> N >> Q;
    int u[N-1], v[N-1], c[N-1], A[Q], B[Q];
    for(int i = 0;i <(N-1);i++){
        cin >> u[i] >> v[i] >> c[i];
    }
    for (int i = 0; i < Q; i++)
    {
        cin >> A[i] >> B[i];
    }
    
}