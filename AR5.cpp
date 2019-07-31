#include <iostream>
using namespace std;
void leftRotate(int arr[], int d, int n)
{
    for (int z = 0; z < d; z++)
    {
        int temp = arr[0], i;
        for (i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];

        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int rotateArray(int num, int x)
{
    return x;
}

int main()
{
    int arr[100], n, d, numbers;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    leftRotate(arr, d, n);
    numbers = rotateArray(numbers, d);

    return 0;
}
