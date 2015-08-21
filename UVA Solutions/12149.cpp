//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n,ans;

    while(cin>>n && n!=0)
    {
        ans=0;
        for(int i=1;i<=n;i++)
            ans+=i*i;
        cout<<ans<<endl;
    }

    return 0;
}

