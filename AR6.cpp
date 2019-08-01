#include <iostream>
using namespace std;

const int MAX_CHAR = 26;

struct Trie
{
    int cnt;

    Trie *node[MAX_CHAR];
    Trie()
    {
        for (int i = 0; i < MAX_CHAR; i++)
            node[i] = NULL;
        cnt = 0;
    }
};

Trie *insert(Trie *root, string s)
{
    Trie *temp = root;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {

        int index = s[i] - 'a';
        if (!root->node[index])
            root->node[index] = new Trie();

        root = root->node[index];
    }
    root->cnt++;
    return temp;
}

int search(Trie *root, string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'a';
        if (!root->node[index])
            return 0;
        root = root->node[index];
    }
    return root->cnt;
}

int query(string s);

void answerQueries(string arr[], int n, string q[],
                   int m)
{
    Trie *root = new Trie();
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);
    for (int i = 0; i < m; i++)
        cout << search(root, q[i]) << endl;
}

int main()
{
    int n, m;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    string q[m];
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    answerQueries(arr, n, q, m);

    return 0;
}