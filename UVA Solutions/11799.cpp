#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n,r=0;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            r=max(a,r);
        }
        cout<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}


