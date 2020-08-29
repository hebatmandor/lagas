#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);
  int hasil = 0;
  for (int i = 1; i <= N; i++) {
    int Bi;
    scanf("%d", &Bi);
    hasil += Bi;
  }
  printf("%d\n", hasil);
}