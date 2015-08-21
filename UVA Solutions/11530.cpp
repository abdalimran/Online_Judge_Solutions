/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int ar[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};

    int t;
    cin>>t;
    cin.ignore();

    for(int i=1; i<=t; i++)
    {
        string s;
        getline(cin,s);

        int ans=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
                ans++;
            else
                ans+=ar[s[i]-'a'];
        }

        cout<<"Case #"<<i<<": "<<ans<<endl;
    }

    return 0;
}


