#include <iostream>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    int arr[K];
    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
    }
    

    for (int j = 1; j <= N-K; j++){
        for (int i = 0; i < K; i++){
            if (j == arr[i]){
                continue;
            }else
            {
                cout << j;
            }
        }
    }
    cout << endl;
}