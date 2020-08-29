#include <iostream>
using namespace std;
int main(){
    int n, hasil=0;
    cin >> n;
    int l[n], r[n];
    for(int i = 0; i <n; i++){
        cin >> l[i] >> r[i];
        hasil+=l[i] + r[i];
    }
}