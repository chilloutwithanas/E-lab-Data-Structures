//Author Pulkit Singh

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string c;
    cin >> c;
    int s1 = 0, s2 = 0;
    for (int i = 0; c[i] != '\0'; i++) {
      if (c[i] == 'S') {
        if (c.substr(i, 7).compare("SUVOJIT") == 0) {
          s2++;
        } else if (c.substr(i, 4).compare("SUVO") == 0) {
          s1++;
        }
      }
    }
    cout << "SUVO = " << s1 << ", SUVOJIT = " << s2 << "\n";
  }

  return 0;
}
