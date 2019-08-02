#include<iostream>
#include<string.h>

using namespace std;
int main()
{int n; cin>>n;
        char str[n][20], t[20];
        int i, j;

        for(i=0; i<n; i++)
        {
               // cout<<" ";
                cin>>str[i];
        }
        for(i=1; i<n; i++)
        {
                for(j=1; j<n; j++)
                {
                        if(strcmp(str[j-1], str[j])>0)
                        {
                                strcpy(t, str[j-1]);
                                strcpy(str[j-1], str[j]);
                                strcpy(str[j], t);
                        }
                }
        }
        for(i=0; i<n; i++)
        {
               // cout<<" "<<endl;
                cout<<str[i]<<endl;
        }
        return 0;
}