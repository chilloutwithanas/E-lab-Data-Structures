#include <iostream>
using namespace std;

int sumOftwo (int arr[], int size, int k1, int k2) {
    int temp;
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        //author anas
    int result =0;
    for (int i=k1; i<k2-1; i++) {
        result += arr[i];
    }
    return result;
}

int main () {
    int test,arr[20],k1,k2,size;
    cin>>test;
    
    while (test--) {
        cin>>size;
        for (int i=0; i<size; i++) 
            cin>>arr[i];
            cin>>k1>>k2;
            cout<<sumOftwo (arr, size, k1, k2)<<endl;
        
    }
    return 0;
}

