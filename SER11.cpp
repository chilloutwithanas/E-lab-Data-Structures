//Author Pulkit Singh

#include <iostream>
#define ll long long
using namespace std;
struct order
{
int weight;
int timestamp;
};
int main()
{
ll int n,q,i,index=0;
cin>>n;
order o1[n];
while(n--){
ll int w=0;
cin>>q;
if(q==1){
cin>>o1[index].weight>>o1[index].timestamp;
index++;
}
else if(q==2){
ll int p,m;
cin>>p>>m;
ll int t=m-p;
if(t<0){
t=0;
}
for(int i=0;i<index;i++){
if(o1[i].timestamp >=t && o1[i].timestamp <=m ){
w+=o1[i].weight; 
}
}
cout<<w<<endl;
}
}
return 0;
}