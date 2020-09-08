#include <iostream>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    int A[K];
    for (int i = 1; i <= K; i++)
    {
        cin >> A[i];
    }
    for (int j = 1; j <= N-K; j++){
        for (int i = 1; i <= K; i++){
            if (j == A[i]){
                continue;
            }else
            {
                cout << j;
                if (j)
                {
                    /* code */
                }
                
            }
        }
    }
    cout << endl;
}