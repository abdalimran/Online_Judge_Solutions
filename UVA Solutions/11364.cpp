//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

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
        int n;
        cin>>n;

        int ar[n];

        int mi=100,ma=-1;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];

            if(ar[i]>ma)
                ma=ar[i];
            if(ar[i]<mi)
                mi=ar[i];
        }

        cout<<2*(ma-mi)<<endl;
    }

    return 0;
}

