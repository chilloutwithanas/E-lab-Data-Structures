#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
 
int main()
{
    int m,n;
    cin>>m>>n;
    
    priority_queue<int> q;
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    long long SUM = 0;
    for(int i=0;i<n;i++){
     int y=q.top();
     SUM+=y;
     q.pop();
     q.push(y-1);
    }
    cout<<SUM<<endl;
    
}