#include <bits/stdc++.h>
using namespace std;
int main(){
  int N, angka;
  bool cek;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> angka;
    cek = true;
    //untuk angka 1 atau kurang dari 2
    if (angka < 2)
      cek = false;

    //cek untuk angka lebih dari dua, dengan trunch artinya pemblatan, sqrt artinya akar
    for (int j = 2; j <= trunc(sqrt(angka)); j++)
    {
      if(angka%j==0){
        cek = false;
        break;
      }
    }

    if (cek==true){
      cout << "YA" << endl;
    }else{
      cout << "BUKAN" << endl;
    }
  }
}