#include <iostream>
#include <iomanip>
using namespace std;
float findMean(int A[], int N)
{
    float sum = 0;
    for (int i = 0; i < N; i++)
        sum = sum + A[i];
    cout << setprecision(2) << fixed << sum / N;
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    findMean(a, n);
    return 0;
}