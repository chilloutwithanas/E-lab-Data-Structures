#include <stdio.h>
int main() {
	int n,i;
  	scanf("%d",&n);
  	int a[n];
  	for(i=0;i<n;i++)
      scanf("%d",&a[i]);
  	int count=0;
  	for(i=0;i<=n-2;i++)
    {
      if(a[i]<a[i+1])
      {
        count++;
      }
    }
  	printf("%d",count+1);
	return 0;
}
