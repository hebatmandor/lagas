#include <iostream> 
using namespace std;

void MenaraHanoi(int N, char asal, char bantu, char tujuan){
    if( N == 1){
        cout<< N << " " << asal << " " << tujuan << endl;
    }else{
        MenaraHanoi(N-1,asal,tujuan, bantu);
		cout<< N << " " << asal << " " << tujuan << endl;
		MenaraHanoi(N-1, bantu, asal, tujuan);
    }
}

int main(){
    int piringan;
    cin >> piringan;
	MenaraHanoi(piringan,'A','B','C');
}
