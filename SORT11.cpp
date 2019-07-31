#include <iostream>
#include <algorithm>
using namespace std;

static void mergeSort(int a[], int l, int r)
{
    int lol;
}

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int temp = ceil(1.0 * n / (k + 1));
        int small = 0, big = 0;
        for (int i = 0; i < temp; i++)
        {
            small += arr[i];
            big += arr[n - 1 - i];
        }
        cout << small << " " << big << "\n";
    }
    return 0;
}
