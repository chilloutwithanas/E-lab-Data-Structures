#include <iostream>

using namespace std;

void sort(int a[],int n) {
  for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (a[i]>a[j]) {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
  }
}

int main() {
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, n);
        cout << arr[n-1]*arr[n-2] << "\n";
    }
}