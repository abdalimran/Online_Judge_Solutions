//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n;

    while(cin>>n && n>0 && n<50)
    {
        int ar[n];

        for(int i=0; i<n; i++)
            cin>>ar[i];

        int t=n*(n-1)/2,c=0;

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(__gcd(ar[j],ar[i])==1)
                    c++;
            }
        }

        if(c==0)
            cout<<"No estimate for this data set."<<endl;
        else
            cout<<fixed<<setprecision(6)<<sqrt(t*6*1.0/c)<<endl;
    }


    return 0;
}

