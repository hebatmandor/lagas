#include <iostream>
using namespace std;
int main(){
    int a, b, c, x;
    cin >> a , b , c , x;
    a = (a*x+b) % c;
    cout << a << endl;
}