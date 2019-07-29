//author anas khan

#include <iostream>
using namespace std;
int main() {
	
  int arr[20];
  int size;
  int i,j,temp;
  
  cin>>size;
  
  for (int i=0; i<size; i++) {
  	cin>>arr[i];
  }
 
  
  for (int i=0; i<size; i++) {
  	for (int j=i+1; j<size; j++) {
      
      	if(arr[i] < arr[j]){
        	temp = arr[i];
          	arr[i] = arr[j];
          	arr[j] = temp;
        }
    }
  }
  
  //for (int i=0; i<size; i++) {
 // 	cout<<"The third Largest element is "<<arr[2]<<endl;
  //}
  
  cout<<"The third Largest element is "<<arr[2];
 
  return 0;
}