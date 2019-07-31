#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("ip.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a[x], b[y];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < y; i++)
        {
            cin >> b[i];
        }
        int p1 = 0, p2 = 0;
        int c[x + y];
        for (int ptr = 0; ptr < x + y; ptr++)
        {
            if (p1 < x && a[p1] >= b[p2] || p2 == y)
            {
                cout << a[p1] << " ";
                p1++;
            }
            else
            {
                cout << b[p2] << " ";
                p2++;
            }
        }
        cout << "\n";
    }
    return 0;
}
