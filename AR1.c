#include <stdio.h>
int main() {
	int MAX,j,swap;
  	scanf("%d\n",&MAX);
  	long long int array[MAX], i, largest1, largest2;
  	for(i=0;i<MAX;i++)
      scanf("%lld ",&array[i]);
  	for(i=0;i<MAX;++i)
    {
      for(j=i+1;j<MAX;++j)
      {
        if(array[i]<array[j])
        {
          swap = array[i];
          array[i] = array[j];
          array[j] = swap;
        }
      }
    }
  	largest1 = array[0];
  	largest2 = array[1];
  	float n1= largest1;
  	float n2 = largest2;
  	//printf("%d %d",largest1,largest2);
  	float mean = (n1+n2)/2;
  	printf("%.1f",mean);
	return 0;
}
