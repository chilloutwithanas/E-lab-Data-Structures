#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,j,i;
  	cin>>n;
  	vector<int> v[n+1];
  	for(i=0;i<n;i++)
    {
    cin>>j>>k;
    v[k].push_back(j);
    v[j].push_back(k);
    
    }
  for(i=0;i<n;i++)
  {
    cout<<"Adjacency list of vertex "<<i<<"\n";
    for(j=v[i].size()-1;j>=0;j--)
    {
    cout<<v[i][j]<<" -> ";
    }
    cout<<"\n";
  }
	return 0;
}