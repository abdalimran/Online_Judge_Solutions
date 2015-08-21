#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n;
    while(cin>>n)
    {
        int ar[n];

        for(int i=0; i<n; i++)
            cin>>ar[i];
        int m;
        cin>>m;

        int mi=m,k,l;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar[i]+ar[j]==m)
                {
                    if(abs(ar[i]-ar[j])<mi)
                    {
                        mi=abs(ar[i]-ar[j]);
                        k=ar[i];
                        l=ar[j];
                    }
                }
            }
        }
        if(k<l)
            cout<<"Peter should buy books whose prices are "<<k<<" and "<<l<<".\n"<<endl;
        else if(l<k)
            cout<<"Peter should buy books whose prices are "<<l<<" and "<<k<<".\n"<<endl;
    }

    return 0;
}

