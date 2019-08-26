#include <bits/stdc++.h>

using namespace std;

struct node {
    int lol;
};

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    set <int> uniq;
    cout << "List : ";
    for (int i=0; i<n; i++) {
        if (uniq.find(arr[i])!=uniq.end()) {
            continue;
        }
        cout << "->" << arr[i];
        uniq.insert(arr[i]);
    }
}
