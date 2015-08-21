#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int p[n];

        for(int i=0; i<n; i++)
            cin>>p[i];

        sort(p,p+n);

        int dis=0;

        for(int i=n-3; i>=0; i-=3)
            dis+=p[i];

        cout<<dis<<endl;
    }


    return 0;
}

