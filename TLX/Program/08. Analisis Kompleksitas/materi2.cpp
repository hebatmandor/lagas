#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int N, R, C;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            int j = N / i;
            if (abs(R-C) > abs(i-j))
            {
                R = i;
                C = j;
            }
            
        }
    }
    cout << C << R << endl;
}