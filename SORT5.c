#include <stdio.h>
void sort(int a[],int n,int k);
void sort(int a[],int n,int k)
{ 
   int l;int i;
   l=a[0];
       for(i=1;i<n;i++)
       {
           if(a[i]>l)
           {
               l=a[i];
           }
       }
       if(l>k)
       {
       printf("%d\n",l-k);
       }
       else
       printf("-1\n");
}
  
int main() 
{
   int i,j,k,t,n,m,l;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d",&n,&m);
        int a[n];
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
     
     sort(a,n,m);
          
      
   }
    return 0;
}