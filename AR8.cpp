#include <iostream>
using namespace std;
int main() {
  int n;
    cin>>n;
  int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
       if(a[i]>a[j])
       {
          c = a[i];
         a[i] = a[j];
         a[j] = c;
       }
    }
  }   
  for(i=0;i<n;i++)
  {
    if(a[i]>=0)
    if(a[i]%2!=0)
      cout<<a[i]<<endl;
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>=0)
    if(a[i]%2==0)
      cout<<a[i]<<endl;
  }
	
	return 0;
}