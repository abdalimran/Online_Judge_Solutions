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
        double x,y,z;
        cin>>x>>y>>z;

        cout<<z*(2*x-y)/(x+y)<<endl;
    }

    return 0;
}

