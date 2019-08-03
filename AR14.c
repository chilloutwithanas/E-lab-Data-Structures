#include <stdio.h>
// C program to find sum of array
// elements using recursion.

// Return sum of elements in A[0..N-1]
// using recursion.
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main() {
	int sz,i;
  	scanf("%d",&sz);
  	int ar[sz];
  	for(i=0;i<sz;i++)
      scanf("%d",&ar[i]);
  	int res = findSum(ar,sz);
  	printf("%d",res);
	return 0;
}
