//Author Pulkit Singh

#include<bits/stdc++.h>

using namespace std;
main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, d, fail = 0;
    cin >> n >> k;
    string s[n];
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    map < int, int > mp;
    map < int, int > ::iterator it;
    for (int i = 0; i < n; i++) {
      mp[s[i].size()]++;
    }
    if (n % k == 0) {
      d = n / k;
      for (it = mp.begin(); it != mp.end(); it++) {
        if ((it -> second) % k != 0) {
          fail = 1;
          break;
        }
      }
      if (fail == 0)
        cout << "Possible" << endl;
      else
        cout << "Not possible" << endl;
    } else
      cout << "Not possible" << endl;
  }
}