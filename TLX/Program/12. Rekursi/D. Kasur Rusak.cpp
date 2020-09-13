#include <iostream>
#include <string.h>

using namespace std;
int main(){
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
        cout << "YA" << endl;
    }else{
        cout << "BUKAN" << endl;
    }
}