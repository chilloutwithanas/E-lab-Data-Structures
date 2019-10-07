#include<bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define pow2(x) ((x)*(x))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long int
#define eb emplace_back
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end()
#define nl "\n"
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef vector< vl > vvl;
typedef pair< int,int > ii;
typedef pair< ll,ll> pll;
typedef map< ll,ll> mll;
typedef map< int,int> mii;
struct node *rightside;
struct node *leftside;
void inorder(ll ar[],vl &v,ll n,ll i)
{
	if(i>=n)
		return;
	inorder(ar,v,n,2*i+1);
	v.eb(ar[i]);
	inorder(ar,v,n,2*i+2);
}
ll minSwap(vl &v)
{
	vector<pll> v1(v.size());
	ll ans = 0ll;
	ll n = v.size();
	for(int i=0;i<n;i++)
	{
		v1[i].ff = v[i];
		v1[i].ss = i;
	}
	sort(all(v1));
	for(int i=0;i<n;i++)
	{
		if(i==v1[i].ss)
			continue;
		else
		{
			swap(v1[i].ff,v1[v1[i].ss].ff);
			swap(v1[i].ss,v1[v1[i].ss].ss);
		}
		if(i!=v1[i].ss)
			i--;
		ans++;
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll ar[n];
    for(int i=0;i<n;i++)
    	cin >> ar[i];
    vl v;
    inorder(ar,v,n,0);
    cout << minSwap(v) << nl;
    return 0;
}
