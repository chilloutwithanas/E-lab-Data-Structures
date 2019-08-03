#include <iostream>
using namespace std;
int main()
{
    int MAX = 100;
    int array[MAX], i, largest1, largest2;
    cin >> i;
    for (int n = 0; n < i; n++)
        cin >> array[n];
    for (int r = i - 1; r >= 0; r--)
        cout << array[r] << " ";
    return 0;
}