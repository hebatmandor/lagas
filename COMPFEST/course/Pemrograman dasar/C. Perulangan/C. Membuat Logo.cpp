#include <iostream>
using namespace std;
int main(){
    int M, N, L;
    cin >> M >> N >> L;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}