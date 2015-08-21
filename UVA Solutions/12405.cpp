//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t,n;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        string s;
        cin>>n>>s;

        int ans=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='.')
            {
                ans++;
                i+=2;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}

