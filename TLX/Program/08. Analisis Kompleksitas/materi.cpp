#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int N, R, C;
    cin >> N;
    //komputasi
    for (int i = 1; i <= N ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i * j == N)
            {
                if (abs(R-C) > abs(i-j))
                {
                    R = i;
                    C = j;
                }
                
            }
            
        }
        
    }
    cout << R << C << endl;
}