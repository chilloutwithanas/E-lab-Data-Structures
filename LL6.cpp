#include <bits/stdc++.h>
/*
 struct node
int Create()
*/
using namespace std;
int main() {
	int n;
  cin >> n;
  vector <int> arr(n);
  for (int i=0; i<n; i++) cin >> arr[i];
  int d;
  cin >> d;
  cout << "Linked List : ";
  for (int i=d; i<n; i++) {
    cout << "->" << arr[i];
  }
	return 0;
}