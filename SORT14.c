//Author Pulkit Singh

#include<stdio.h>

int main() {
  int a[1001];
  int n, i, j, t, swap, temp, k, m, s, r;
  scanf("%d", & t);
  while (t--) {
    swap = 0;
    scanf("%d %d  %d", & m, & s, & n);

    for (i = 0; i < n; i++) {
      scanf("%d", & a[i]);
    }
    for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - i - 1; j++) {
        if (a[j] > a[j + 1]) {
          temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;

          swap++;
        }
      }
    }

    r = swap * s;
    int c = 0;
    int x=(s*c)/60;
    if (r <= m * 60) {
      printf("1");
    } else {
      printf("0");
    }
    printf("\n");
  }
  return 0;
}
