#include <bits/stdc++.h>
using namespace std;
int main()
{
    int freq[26] = {0};
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            freq[(int)s[i] - 97]++;

        int j = 0;
        int f = 0;
        while (f < 26)
        {

            for (int i = 25; i >= 0; i--)
            {

                if (freq[i] == j)
                {
                    f++;
                    cout << (char)(i + 97) << " ";
                }
            }
            j++;
        }
        cout << "\n";
        memset(freq, 0, sizeof freq);
    }
    return 0;
}