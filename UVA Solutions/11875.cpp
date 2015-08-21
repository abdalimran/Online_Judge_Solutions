#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t,n;
    int a[12];

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n;
        int temp = 0;

        while(temp<n)
            cin>>a[temp++];

        sort(a,a + n);

        cout<<"Case "<<i<<": "<<a[n/2]<<endl;
    }
    return 0;
}

