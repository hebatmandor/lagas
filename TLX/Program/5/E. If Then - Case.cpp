#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a >= 1 && a < 10){
        cout << "satuan" << endl;
    }else if (a >= 10 && a <100)
    {
        cout << "puluhan" << endl;
    }else if (a >=100 && a < 1000)
    {
        cout << "ratusan" << endl;
    }else if (a >= 1000 && a < 10000)
    {
        cout << "ribuan" << endl;
    }else
    {
        cout << "puluhribuan" <<endl;
    }
}