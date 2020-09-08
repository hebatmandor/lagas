#include <iostream>
using namespace std;
void solve(int a){
	if(a % 50 != 0){
		cout << "Kebawah" << endl;
	}
}
int main(){
	int a;
	cout << "Masukkan nilai : ";cin >> a;
	solve(a);
}
