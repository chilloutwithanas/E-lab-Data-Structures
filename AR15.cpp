#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])

{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {

        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];
}

int main()
{
    int arr1[100], n1;
    int arr2[100], n2;
    cin >> n1 >> n2;
    int arr3[n1 + n2];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int j = 0; j < n2; j++)
        cin >> arr2[j];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    cout << endl;
    for (int i = 0; i < n1 + n2 - 1; i++)
        cout << arr3[i] << " ";
    cout << arr3[n1 + n2 - 1];

    return 0;
}