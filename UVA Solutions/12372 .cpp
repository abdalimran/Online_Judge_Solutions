#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int h,w,l;
        cin>>h>>w>>l;

        if(l <= 20 && w <= 20 && h <= 20)
            cout<<"Case "<<i<<": good"<<endl;
        else
            cout<<"Case "<<i<<": bad"<<endl;
    }

    return 0;
}

