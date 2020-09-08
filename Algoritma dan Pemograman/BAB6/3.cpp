#include <bits/stdc++.h>
using namespace std;
void solve(int dda, int ddb, int mma, int mmb, int yya, int yyb){
    int totala = dda + (30*mma) + (365*yya);
    int totalb = ddb + (30*mmb) + (365*yyb);
    int selisih = abs(totala-totalb);
    yya = selisih / 365;
    int X = selisih % 365;
    mma = X / 30;
    dda = X % 30;
    cout << "Selisih : " << yya << " Tahun, " << mma << " Bulan, " << dda << " Hari." << endl;
}
int main(){
    int dda,ddb, mma, mmb, yya, yyb;
    cout << "Masukkan tanggal ke 1 : (dd:mm:yy/pisah dengan spasi) "; cin >> dda >> mma >> yya;
    cout << "Masukkan tanggal ke 2 : (dd:mm:yy/pisah dengan spasi) "; cin >> ddb >> mmb >> yyb;
    solve (dda, ddb, mma, mmb, yya, yyb);
}