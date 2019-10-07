 #include<bits/stdc++.h>
    using namespace std;
void MERG(int x,int y);
int FIND_root(int i);
    int root(int arr[], int i)
    {
        
        while(arr[i] != i)
        {
            i = arr[i]; 
            arr[i] = arr[arr[i]];
            
        }
        return i;
    }
     
    void un(int arr[],int size[], int a, int b)
    {
        int pa = root(arr,a);
        int pb = root(arr,b);
        
        if(pa==pb) return;
        
        if(size[pa] > size[pb])
        {
            arr[pb] = pa;
            size[pa] += size[pb];
            size[pb] = 0;
        }
        else
        {
            arr[pa] = arr[pb];
            size[pb] += size[pa];
            size[pa] =0;
        }
    }
    int main()
    {
        int n,m;
        cin>>n>>m;
        int arr[n+1];
        int size[n+1];
        for(int i=1;i<=n;i++)
        {
            arr[i] = i;
            size[i] = 1;
        }
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            un(arr,size,x,y);
            
        }
        for(int i=1;i<=n;i++)
        {
            cout<<size[root(arr,i)]-1<<" ";
        }
        cout<<endl;
        return 0;
    }
