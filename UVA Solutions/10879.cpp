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

    for(int i=1; i<=t; i++)
    {
        int n,c=0;
        cin>>n;

        cout<<"Case #"<<i<<": "<<n;
        for(int i=2; i<n/2; i++)
        {
            if(n%i==0)
            {
                cout<<" = "<<i<<" * "<<n/i;
                c++;
            }
            if(c==2)
                break;
        }
        cout<<endl;
    }

    return 0;
}

