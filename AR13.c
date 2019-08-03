#include <stdio.h>
float findMean(int A[],int N)
{
  int i;
  float mean,sum=0;
  for(i=0;i<N;i++)
  {
    sum = sum + A[i];
  }
  mean = sum/N;
  return mean;
}
int main() {
	int n,i;
  	scanf("%d\n",&n);
  	int arr[n];
  	for(i=0;i<n;i++)
      scanf("%d ",&arr[i]);
  	float res = findMean(arr,n);
  	printf("%.2f",res);
	return 0;
}
