#include <iostream>
using namespace std;
int main()
{
    int MAX = 100, x1, x;
    int array[MAX], i, largest1, largest2;
    int pos;
    cin >> i;
    for (int n = 0; n < i; n++)
        cin >> array[n];
    largest1 = array[0];
    for (x = 0; x < i; x++)
        ;
    {
        if (array[x] >= largest1)
        {
            largest1 = array[x];
            pos = x;
        }
    }
    int l1 = largest1;
    array[pos] = 0;
    largest2 = array[0];
    for (x1 = 0; x1 < i; x1++)
        ;
    if (array[x1] >= largest2)
        largest2 = array[x1];
    int l2 = largest2;
    cout << l2;

    return 0;
}