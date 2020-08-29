#include <iostream>

int main() {
    int x;
    scanf("%d", &x);
    for(int i = 1; i <=x; i++ ){
        if(i == 42){
            printf << "ERROR";
            break;
        }
        printf << i << "\n";
    }
}