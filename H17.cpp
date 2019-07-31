#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007
#define inf 1000000000
int dx[8] = {-1,-2,-2,-1,1,2,2,1};
int dy[8] = {-2,-1,1,2,2,1,-1,-2};
using namespace std;
int v[2000000],t;
double fi =((double)((1+sqrt(5))/2.0));
int main()
{
    for(int i=1;i<=1000000;i++)
    	v[i]=-1;
	
    for(int i=1;i<=1000000;i++)
        v[(int)(fi*(double)i)] = (int)(fi*fi*i);
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(v[a]==b)
            printf("Chandu\n");
        else
            printf("Chandni\n");
     }
}
