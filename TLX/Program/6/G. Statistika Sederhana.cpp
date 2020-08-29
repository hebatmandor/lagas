#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    long long b[100];
    int max=b[0], min;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];

        for (int i = 0; i < a; i++)
        {
            if (max < b[i])
            {
                max = b[i];
            }else if(min >b[i]){
                min = b[i];
            }
        }
    }
    cout << max << min << endl;
}