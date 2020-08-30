#include <bits/stdc++.h>
using namespace std;
void solve(int N, int Q){
    int ar[N], bil;
    for (int i=1; i<=Q; i++) {
		cin >> bil;
		ar[bil] = 1;
	}

	for (bil=1; bil<=N; bil++) {
        if(ar[bil]!=1){
            cout << bil;
            if(N%2 == 0){
                if(bil < N){
                    cout << " ";
                }else
                {
                    cout << endl;
                }
                
            }
            else{
                if(bil < N-1){
                    cout << " ";
                }else{
                    cout << endl;
                }
            }
        }
	}

}
int main () {
	int N, Q;
	cin >> N >> Q;
    solve(N, Q);
}
