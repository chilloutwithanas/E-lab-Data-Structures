#include <iostream>
using namespace std;
int main() {
  int t,j,k;
  cin>>t;
  while(t--)
  {
    int n,te=0;
    cin>>n;
    int a[n];
    for(j=0;j<n;j++)
    {
      cin>>a[j];
    }
     for(j=0;j<n-1;j++)
     {
      for(k=j+1;k<n;k++)
      {
         if(a[j]>a[k])
         {
           te = a[j];
           a[j] = a[k];
           a[k] = te;
         }
      }
     }
   for(j=n-1;j>0;j=j-2)
   {
     if(a[j]!=a[j-1])
        cout<<a[j]<<" ";
   }
    cout<<endl;
  }
	
	return 0;
}