#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        long long s,d;
        cin>>s>>d;

        long long x=(s+d)/2;
        long long y=(s-x);

        if(d>s||(s-d)%2==1)
            cout<<"impossible"<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }

    return 0;
}

