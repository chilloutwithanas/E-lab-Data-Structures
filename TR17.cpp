#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=a;i<b;i++)
#define ll long long int
const int MAXN=2000;
 
int main()
{
    int n;
    cin >> n;
    bitset<2001>graph[2001];
    
    fo(i,0,n)
    {
        fo(j,0,n)
        {
            int x;
            cin >> x;
            graph[i][j] = x;
        }
    }
    
    ll cnt = 0;
    ll ans = 0;
    
    fo(i,0,n)
    {
        fo(j,i+1,n)
        {
            cnt = (graph[i] & graph[j]).count();
            ans += (cnt * (cnt-1))/2;
        }
    }
    
    cout << ans/2 <<endl;
}