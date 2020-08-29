#include <iostream>
using namespace std;
int main(){
    int T, R, S, tot=0;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> R >> S;
        for(int j = 0; j < R/S; j ++){
            for(int k = j; k < ((R*2)-2)/S; k++){
                tot++;
            }
        }
        cout << tot << endl;
    }
}