//Author Pulkit Singh

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int main() {
  long t, n, m;
  long long int s = 0;
  cin >> t;
  for (long i = 0; i < t; i++) {
    cin >> n >> m;
    s = 0;
    long a[n];
    for (long j = 0; j < n; j++)
      cin >> a[j];
    sort(a, a + n);
    if (m > n)
      m = n;
    for (long j = 0; j < m; j++)
      if (a[j] <= 0)
        s = s + abs(a[j]);
    cout << s << endl;
    memset(a, 0, n);
  }
  return 0;
}
