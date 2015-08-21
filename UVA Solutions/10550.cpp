//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int a,b,c,d;

    while(cin>>a>>b>>c>>d && a!=0||b!=0||c!=0||d!=0)
    {
        int p,q,r,deg;

        if (b>a)
            p = 40-b+a;
        else
            p = a-b;

        if (c>b)
            q = c-b;
        else
            q=40-b+c;

        if (d>c)
            r = 40+c-d;
        else
            r = c-d;

        deg= 360*2+p*9+360+q*9+r*9;

        cout<<deg<<endl;
    }

    return 0;
}

