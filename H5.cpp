#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, t, sol;
  cin >> t;
  string s;
  while (t--) {
    int count[10000];
    cin >> s;
    sol = 0;
    memset(count, 0, sizeof(count));
    int n = (int) s.size();
    for (int i = 0; i < n; i++) count[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
      sol += (count[i] % 2);
    }
    sol--;
    sol = max(sol, 0);
    cout << sol << endl;
  }
  return 0;
}