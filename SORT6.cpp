#include <iostream>
using namespace std;

int main()
{
    int tc, k;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i, j, temp;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (i = 0; i < n - 2; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}