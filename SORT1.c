//Author Pulkit Singh

#include <stdio.h>

void quicksort(int x[10], int first, int last) {}
int main() {
  int n, v, j, i;
  scanf("%d", & n);
  scanf("%d", & v);
  int a[n];
  int b[v];
  for (i = 0; i < n; i++) {
    scanf("%d", & a[i]);
  }

  for (i = 0; i < v; i++) {
    scanf("%d", & b[i]);
  }

  for (j = 0; j < v; j++) {
    int c = 0;
    for (i = 0; i < n; i++) {
      if (b[j] == a[i]) {
        printf("YES\n");
        c = 1;
        break;
      }

    }
    if (c == 0)
      printf("NO\n");
  }
  return 0;
}
