#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        int count[300] = {0};
        for (int i = 0, j = 0; i < s.length() || j < t.length(); i++, j++)
        {
            if (i < s.length())
                count[s[i]]++;
            if (j < t.length())
                count[t[j]]--;
        }
        int c = 0;
        for (int i = 0; i < 300; i++)
            c += abs(count[i]);
        cout << c << "\n";
    }
    return 0;
}



