#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    unsigned long long A,B;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> A >> B;
        if(A > B){
            if(A-B >= 2)
                cout << "Tere" << endl;
            else
                cout << "Voting Ulang" << endl;
        }else if(B > A){
            if(B - A >= 2)
                cout << "Toni" << endl;
            else
                cout << "Voting Ulang" << endl;
        }else if(A == B){
            cout << "Voting Ulang" << endl;
        }
    }
}