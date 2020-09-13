#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

using namespace std;
char buff[111];
int N;

int main() {
  scanf("%s", buff);
  scanf("%d", &N);

  
  int len = strlen(buff); //menghitung panjang karakter
  for (int i = 0; i < len; i++) {
    int ord = (buff[i] - 'a'); //menaruh nilai ke ord
    cout << ord << " <-- ord, " << buff[i] << "<-- buf[" << i << "], " << 'a' << endl;
    int encrypted = (ord + N) % 26;
    buff[i] = encrypted + 'a';
  }

  printf("%s\n", buff);
}