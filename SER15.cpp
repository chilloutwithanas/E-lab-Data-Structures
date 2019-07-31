#include <iostream>
#include <vector>

using namespace std;

void show(vector<int> temp)
{
    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    cout << "\n";
}

void printSums(int N)
{
    int n = N;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        //to check for starting from here
        ans = i;
        vector<int> temp;
        temp.push_back(i);
        for (int j = i + 1; j < n; j++)
        {
            ans += j;
            temp.push_back(j);
            if (ans >= n)
            {
                break;
            }
        }
        if (ans == n)
        {
            show(temp);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printSums(n);
    return 0;
}
