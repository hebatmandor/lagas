#include <bits/stdc++.h>
using namespace std;
int main(){
    long int arr[100000], count=1, l, modus, n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    modus = arr[0], l = 1;

    for (int i = 0; i < n-1; i++){
        if (arr[i] > 0){
            count = 1;
            for (int j = i+1; j < n; j++){
                if (arr[i] == arr[j]){
                    arr[j] = 0;
                    count++;
                }
            }
            if (count > 1){
                l = count;
                modus = arr[i];
            }else{
                if (count == 1){
                    if (arr[i] > modus){
                        l = count;
                        modus = arr[i];
                    }
                }
            }
        }
    }
    cout << modus << endl;
}