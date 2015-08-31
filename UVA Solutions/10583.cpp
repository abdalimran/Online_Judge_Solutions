/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int Parent[MAX];
int Count=0;

void Makeset(int n)
{
    for(int i=1; i<=n; i++)
    {
        Parent[i]=i;
        Count++;
    }
}

int Find_Representative(int r)
{
    if(Parent[r]==r)
        return r;
    else
    {
        return Parent[r]=Find_Representative(Parent[r]);
    }
}

void Union(int a, int b)
{
    int u=Find_Representative(a);
    int v=Find_Representative(b);

    if(u!=v)
    {
        Parent[v]=u;
        Count--;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n,m;
    for(int i=1; cin>>n>>m && n!=0 && m!=0; i++)
    {
        Makeset(n);

        for(int i=1; i<=m; i++)
        {
            int a,b;
            cin>>a>>b;
            Union(a,b);
        }
        cout<<"Case "<<i<<": "<<Count<<endl;
        Count=0;
    }

    return 0;
}
