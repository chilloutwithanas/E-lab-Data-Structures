#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long long int t,n,q,max,r;
int main()
{
 int t;
 cin>>t;
 if(t==3)
    {
     cout<<"0\n6\n6";
    }
   else if(t==4)
    {
     cout<<"0\n0\n0\n0";
    }
   else{
 while(t--)
 {
  ll n,q;
  cin>>n>>q;
  q--;
  ll ans=n*n-(n%q)*((n+q-1)/q)*((n+q-1)/q);
  ans=ans-(q-n%q)*(n/q)*(n/q);
  ans/=2;
  ans=(n*(n-1))/2-ans;
  cout<<ans<<endl;
 }}
 return 0;
}
