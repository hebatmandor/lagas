#include <bits/stdc++.h>
using namespace std;
void solve(int X){
    int hari, jam, menit, detik;
    hari = X / 86400; // 1 hari = 86400 detik
    int sisa = X%86400;
    jam = sisa / 3600;
    sisa = sisa%3600;
    menit = sisa / 60;
    detik = sisa%60;
    cout << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." <<endl;


}
int main(){
    int X;
    cout << "MAsukkan Jumlah detik : ";cin >> X;
    solve(X);
}