#include <iostream>
#include <string.h>

using namespace std;
void solve(){
    string s;
    bool palindrom = true;
    cin >> s;
    int jml = s.length();
    for (int i = 0; i < jml; i++)
    {
        if (s[i]!= s[jml-i-1]){
            palindrom = false;
            break;
        }
    }
    if(palindrom==true){
        cout << "palindrom" << endl;
    }else{
        cout << "bukan palindrom" << endl;
    }
}
int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        solve();
    }
}