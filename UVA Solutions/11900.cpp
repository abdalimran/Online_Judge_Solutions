#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n,p,q;
        cin>>n>>p>>q;

        int ar[n];

        for(int i=0; i<n; i++)
            cin>>ar[i];

        int c=0;

        for(int i=0,j=0;i<n;i++)
        {
            if(c+1<=p && j+ar[i]<=q)
            {
                c++;
                j+=ar[i];
            }
            else
                break;
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }

    return 0;
}

