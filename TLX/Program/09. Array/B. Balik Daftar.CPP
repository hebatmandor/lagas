#include <iostream>
using namespace std;
int main(){
  int N, arr[100];
  while (cin >> arr[N]){
    N++;
  }

  for (int i = N-1; i >= 0; i--)
  {
    cout << arr[i] << endl;
  }
  
}