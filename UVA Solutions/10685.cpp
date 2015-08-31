/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

map<string,string>Parent;
map<string,int>Count;

int lac=0;

void Makeset(string s)
{
    Parent[s]=s;
    Count[s]=1;
}

string Find_Representative(string r)
{
    if(Parent[r]==r)
        return r;
    else
        return Find_Representative(Parent[r]);
}

void Union(string a, string b)
{
    string u=Find_Representative(a);
    string v=Find_Representative(b);

    if(u!=v)
    {
        Parent[v]=u;
        Count[u]+=Count[v];

        if(Count[u]>lac)
            lac=Count[u];
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);

    while(true)
    {
        int p,q;
        cin>>p>>q;

        if(p==0 && q==0)
            break;
        if(q==0)
            lac=1;

        while(p--)
        {
            string s;
            cin>>s;
            Makeset(s);
        }
        while(q--)
        {
            string a,b;
            cin>>a>>b;
            Union(a,b);
        }

        cout<<lac<<endl;
        lac=0;
    }

    return 0;
}
