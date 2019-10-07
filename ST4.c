#include<stdio.h>
void calculateSpan(int price[], int n, int S[])
{
S[0] = 1;
int i; 
for ( i = 1; i < n; i++)
{
S[i] = 1;
int j; 
for ( j = i-1; (j>=0)&&(price[i]>=price[j]); j--)
S[i]++;
}
}

void printArray(int arr[],int n)
{
int i;
for ( i = 0; i < n; i++)
printf("%d ", arr[i]);
}

int main()
{
int size,i,q,price[100];
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&price[i]);
}
int n = (4*size)/sizeof(price[0]);
int S[n];
calculateSpan(price, n, S);
printArray(S, n);
return 0;
}
