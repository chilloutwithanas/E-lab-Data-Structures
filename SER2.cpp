#include <iostream>
using namespace std;
int main() {
	
  	int arr[10];
  
  for (int i =0; i<5; i++) {
  	cin>>arr[i];
  }
//author anas khangi  
  	for (int i = 0; i<5; i++) {
    	for (int j=i+1; j<5; j++) {
          for (int k=j+1; k<5; k++) {
          	if(arr[i]+arr[j]+arr[k]==0){
            	cout<<arr[i]<<" ";
                cout<<arr[j]<<" ";
                cout<<arr[k]<<endl;
            }
          }
        }
    }
  
  
	return 0;
}