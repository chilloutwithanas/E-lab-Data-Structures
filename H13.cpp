#include <bits/stdc++.h>
#define ll long long
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
//aaryan  
int main()
{
    map<char, bool> m;
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        m[str[i]] = 1;
    }
    if (m['a'] && m['e'] && m['i'] && m['o'] && m['u'])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

