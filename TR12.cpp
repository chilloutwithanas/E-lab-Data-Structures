#include<bits/stdc++.h>
using namespace std;
int parent[100010];
int sum[100010];
multiset<int>ss;
int maximum(int a,int b);
int find(int x)
{
	if(parent[x]==x)
	return x;
	return find(parent[x]);
}
int merge(int x,int y)
{
	int xp,yp;
	 xp=find(x);
	yp=find(y);
	if(xp!=yp)
	{
		if(sum[xp]>sum[yp])
		{
			ss.erase(ss.find(sum[xp]));
    		ss.erase(ss.find(sum[yp]));
			sum[xp]+=sum[yp];
			parent[yp]=xp;
			sum[yp]=0;
    		ss.insert(sum[xp]);
			return sum[xp];
		}
		else
		{
			ss.erase(ss.find(sum[xp]));
    		ss.erase(ss.find(sum[yp]));
			sum[yp]+=sum[xp];
			parent[xp]=yp;
			sum[xp]=0;
    		ss.insert(sum[yp]);
			return sum[yp];
		}
	}
}
 
int main()
{
	int n,m;
 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
     {
     	sum[i]=1;
     	parent[i]=i;
     	ss.insert(1);
     	
}
 
	for(int i=0;i<m;i++)
    {
    	int x,y;
    	cin>>x>>y;
    
    	int xp=find(x);
    	int yp=find(y);
    	int ans=merge(x,y);
    	multiset<int>::iterator it=ss.end();
    	it--;
    	cout<<*it -*(ss.begin())<<endl;
	}
} 