#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int n,m,i,j,k,l,t;
    int a[100];
    while(cin>>n>>m)
    {
    int p=0;
    for(i=0;i<n;i++)
    {   t=1;
        for(j=0;j<m;j++)
        {
            cin>>a[j];
            if(a[j]==0)
                t=0;
        }
        if(t==1)
            p++;
    }

    printf("%d\n",p);

    }
    return 0;
}
