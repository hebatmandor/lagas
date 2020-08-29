#include <iostream>

using namespace std;

int main(){
 int a,b;
 cin >> a >> b;
 int kpk = a;
 
 while(kpk % b != 0){
  kpk+=a;
 }

 cout << kpk << endl;
}