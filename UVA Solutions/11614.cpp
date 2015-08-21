//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        long long n,ans;
        cin>>n;
        ans=(sqrt(1+8*n)-1)/2;
        cout<<ans<<endl;
    }

    return 0;
}

