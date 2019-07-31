#include <bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
//using namespace boost::multiprecision;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vint vector<int>
#define vll vector<long long int>
#define endl cout << '\n'
#define fre(i, l, n) for (int i = l; i < n; ++i)
#define fr(i, l, n) for (int i = l; i <= n; i++)
#define rfre(i, n, l) for (int i = n - 1; i >= l; i--)
#define rfr(i, n, l) for (int i = n; i >= l; --i)
#define tab '\t'
#define debug cout << '*';
#define s(a) cin >> a;
#define p(a) cout << a;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<long long int, long long int> pll;
typedef pair<int, pair<int, int>> tii;
typedef vector<int> vec;
typedef vector<long long> vecll;
typedef vector<pair<int, int>> vec_pii;
typedef vector<pair<long long int, long long int>> vec_pll;
typedef vector<vector<int>> ugraph;
typedef vector<vector<pair<int, int>>> wgraph;
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define Pi 3.14159265358979
#define gcd(a, b) __gcd(a, b)
#define sf(n) scanf("%lld", &(n))
#define pf(n) printf("%lld\n", (n))
#define min3(a, b, c) (min((c), min((a), (b))))
#define max3(a, b, c) (max((a), max((b), (c))))
#define w(t) while (t--)
#define flt(a) cout << fixed << setprecision(a)
/***************************************************************************************
***************************************************************************************/

/*
vector<int> pime;
bool prime[10000010];

int trr[500100];
int size[500100];
set<int> ste;

void initialise(int n)
{
    fre(i,0,n)
    {
        trr[i]=i;
        size[i]=1;
    }
}



int root(int x)
{
    while(trr[x]!=x)
    {
        trr[x]=trr[trr[x]];
        x=trr[x];
    }
    return x;
}



void join(int x,int y)
{
    int rx=root(x);
    int ry=root(y);
    if(rx==ry)
    {
        return;
    }
    if(size[rx]>size[ry])
    {
        size[rx]+=size[ry];
        trr[ry]=rx;
        ste.insert(-size[rx]);
    }
    else
    {
        size[ry]+=size[rx];
        trr[rx]=ry;
        ste.insert(-size[ry]);
    }
}





void sieve()
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i*i<=10000000;i++)
	{
		if(prime[i])
		{
			for(int j=2*i;j<=10000000;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	fre(i,0,10000001)
	{
		if(prime[i])
		{
			pime.pb(prime[i]);
		}
	}
}









ll modexpo(ll a , ll b)
{
	ll res = 1;
	while(b > 0)
	{
		if(b&1)
		{
			res = (res*a)%mod;
        }
		a=(a*a)%mod;
		b >>=1;
	}
    return res;
}










ll expo(ll a , ll b)
{
	ll res = 1;
    while(b > 0)
    {
		if(b&1)
		{
			res = (res*a);
        }
		a=(a*a);
        b >>=1;
    }
	return res;
}











ll gcd(ll a , ll b)
{
	if (a == 0)
    {
		return b;
    }
	return gcd(b%a , a);
}











bool isPrime(ll n)
{
	if (n <= 1)
    {
		return false;
    }
	if (n <= 3)
    {
		return true;
    }
	if (n%2 == 0 || n%3 == 0)
	{
		return false;
    }
	for (int i = 5 ; i*i <= n ; i+=6)
    {
		if ((n%i==0) || (n%(i + 2) == 0))
        {
			return false;
        }
	}
	return true;
}













ll dist(ll x1 , ll y1 , ll x2 , ll y2)
{
	return (ll)sqrt((long double)((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
}














ll squaredist(ll x1 , ll y1 , ll x2 , ll y2)
{
    	return ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}	











ll nCk(ll n , ll k)
{
	ll C[n+1][k+1];
    ll i,j;
    fr(i,0,n)
    {
        fr(j,0,min(ll(i),k))
        {
            if (j==0 || j==i)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j]=C[i-1][j-1]+C[i-1][j];
            }
        }
    }
    return C[n][k];
}









*/

bool vow(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    s(t);
    w(t)
    {
        string str;
        cin >> str;
        int hash[26] = {0};
        for (ll i = 0; i < str.length(); i++)
        {
            if (!vow(str[i]))
            {
                hash[str[i] - 'a']++;
            }
        }
        ll cnt = 0;
        for (ll i = 0; i < 26; i++)
        {
            if (hash[i])
            {
                cnt++;
            }
        }
        if (cnt % 2)
        {
            cout << "HE!\n";
        }
        else
        {
            cout << "SHE!\n";
        }
    }
    return 0;
}