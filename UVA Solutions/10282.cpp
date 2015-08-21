/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string a,b,str;
    map<string,string>m;

    while(getline(cin,str),str.size())
    {
        stringstream ss;
        ss<<str;
        ss>>a>>b;

        m[b]=a;
    }

    while(cin>>str)
    {
        if(m.count(str))
            cout<<m[str]<<endl;
        else
            cout<<"eh"<<endl;
    }

    return 0;
}


