#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int N, R=1, C=N, i=1, j;
    cin >> N;
    while (i*i <= N )
    {
        if (N % i == 0)
        {
            j = N / i;
            if (abs(R-C) > abs(i - j))
            {
                R = i;
                C = j;
            }
        }
        i++;
    }
    cout << R << C << endl;
}