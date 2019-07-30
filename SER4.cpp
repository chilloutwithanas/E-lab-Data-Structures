//Author Pulkit Singh

#include <iostream>
using namespace std;

int searchX(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  

int main() {
  int n,x,arr[25],res;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>x;
  res=searchX(arr,n,x);
  cout<<res;
  return 0;
}
