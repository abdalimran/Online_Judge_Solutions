/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    double n;
    for(int i=1; cin>>n && n!=0; i++)
    {
        double p = ceil((3+sqrt(9+8*n))/2);

        cout<<"Case "<<i<<": "<<fixed<<setprecision(0)<<p<<endl;
    }

    return 0;
}

