/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

//Problem: Disjoint Sets

#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int Parent[MAX];
int Count_Members[MAX],mx;

void Makeset(int n)
{
    for(int i=1; i<=n; i++)
    {
        Parent[i]=i;
        Count_Members[i]=1;
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
        Count_Members[u]+=Count_Members[v]; //Counting members

        if(Count_Members[u]>mx)
            mx=Count_Members[u];  //Finding maximum
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--)
    {
        int p,q;
        cin>>p>>q;

        Makeset(p);

        for(int i=1; i<=q; i++)
        {
            int a,b;
            cin>>a>>b;
            Union(a,b);
        }
        cout<<mx<<endl;
        mx=0;
    }

    return 0;
}
