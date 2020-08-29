#include <bits/stdc++.h>
using namespace std;
int main(){
  int N, angka, tot=2;
  bool cek;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cek = true;
    cin >> angka;
    //cek untuk angka lebih dari dua, dengan trunch artinya pemblatan, sqrt artinya akar
    for (int j = 2; j <= trunc((angka/2)); j++)
    {
      if(angka%j==0){
        tot+=1;
        if(tot > 4){
            cek = false;
            break;
        }
      }
    }

    if (cek==true){
      cout << "YA" << endl;
    }else{
      cout << "BUKAN" << endl;
    }
    tot=2;
  }
}