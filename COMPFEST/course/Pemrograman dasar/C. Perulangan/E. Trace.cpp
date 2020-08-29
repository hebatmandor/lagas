#include <iostream>
using namespace std;
int main(){
    int N, tot=0, A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A;
            if (i == j)
            {   
                tot+=A;
            }
        }
    }
    cout << tot << endl;
}