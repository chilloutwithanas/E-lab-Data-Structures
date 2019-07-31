//Author Pulkit Singh

#include <iostream>
using namespace std;

void InSort(int arr[], int n) {
  int i, x, j;
  for (i = 1; i < n; i++) {
    x = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > x) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = x;
    if (i == 2) {
      for (int a = 0; a < n; a++) {
        cout << arr[a] << " ";
      }
      cout << endl;
    }
  }
  cout << "Sorted Array:";
  for (int a = 0; a < n; a++) {
    cout << arr[a] << " ";
  }
}

int main() {
  int n, arr[20];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  InSort(arr, n);
  return 0;
}
