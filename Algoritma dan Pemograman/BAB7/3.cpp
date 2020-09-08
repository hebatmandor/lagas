#include<bits/stdc++.h>
using namespace std;
void solve(){
}
int main(){
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan bilangan ke-" << i+1 << "\t: ";cin >> ar[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j <= 3; j++)
        {
            if(ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    cout << "Bilangan setelah diurutkan\t: ";
    for (int i = 0; i < 3; i++)
    {
        cout << ar[i];
        if(i<3-1){
            cout << " ";
        }else
        {
            cout << endl;
        }
        
    }
    
}