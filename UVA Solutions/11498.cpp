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

    while(cin>>t && t!=0)
    {
        int a,b;
        cin>>a>>b;

        while(t--)
        {
            int x,y;
            cin>>x>>y;

            if(x==a||y==b)
                cout<<"divisa"<<endl;
            else if(x>a && y>b)
                cout<<"NE"<<endl;
            else if(x<a && y>b)
                cout<<"NO"<<endl;
            else if(x>a && y<b)
                cout<<"SE"<<endl;
            else if(x<a && y<b)
                cout<<"SO"<<endl;
        }
    }

    return 0;
}


