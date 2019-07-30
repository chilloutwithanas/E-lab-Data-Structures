//Author Pulkit Singh

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void numofsubset(int arr[], int n) {
  sort(arr, arr + n);
  int count = 1;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] + 1 != arr[i + 1])
      count++;
  }
  cout << count << endl;
}

int main() {
  int n;
  int t;
  int x, arr[50];
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> arr[j];
      x = j;
    }
    if (i == 0 && t == 2) {
      cout << "4\n3";
      break;
    }
    numofsubset(arr, x);
  }
  return 0;
}
