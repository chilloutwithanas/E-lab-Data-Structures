//Author Pulkit Singh

#include <stdio.h>

void result(int a[], int b[], int n) {
  int i, j, t, s = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (a[i] > a[j]) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
      if (b[i] < b[j]) {
        t = b[i];
        b[i] = b[j];
        b[j] = t;
      }
    }
  }
  for (i = 0; i < n; i++) {
    s = s + (a[i] * b[i]);
  }
  printf("%d", s);
}
int main() {
  int t, v, w;
  scanf("%d", & t);
  int m[t], c[t][100], d[t][100];
  for (v = 0; v < t; v++) {
    scanf("%d", & m[v]);
    for (w = 0; w < m[v]; w++) {
      scanf("%d", & c[v][w]);
    }
    for (w = 0; w < m[v]; w++) {
      scanf("%d", & d[v][w]);
    }
  }
  for (v = 0; v < t; v++) {
    result(c[v], d[v], m[v]);
    printf("\n");
  }
  return 0;
}
