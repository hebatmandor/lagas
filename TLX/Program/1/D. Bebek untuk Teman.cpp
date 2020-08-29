#include <cstdio>
#include <string>
using namespace std;
int main() {
    int a, b, c, sisa;
    scanf("%d %d", &a, &b);
    c = a/b;
    sisa = a % b;
    printf("masing-masing %d\n", c);
    printf("bersisa %d", sisa);
}