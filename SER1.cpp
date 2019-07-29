#include <iostream>
using namespace std;
int main() {
	
  	int size, arr[10],search;
  
  		cin>>size;
  	
  	for (int i=0 ; i<size; i++) {
    	cin>>arr[i];
    }
  	
  		cin>>search;
  	
  	for (int i=0; i<size; i++) {
    	if (arr[i] == search) {
          cout<<search<<" found at location "<<i+1;
          break;
        }
        //author Anas Khan
      	if (i == size-1) 
        	cout<<"Not found "<<search<<" is not present in the list";
        
    }
  return 0;
}