/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

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
        double x,y,r;
        cin>>x>>y>>r;
        double s=sqrt(x*x+y*y);
        cout<<fixed<<setprecision(2)<<r-s<<" "<<r+s<<endl;
    }

    return 0;
}

