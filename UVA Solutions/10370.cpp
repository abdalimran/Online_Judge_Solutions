#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int sum=0;
        double a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        double av=sum/n;
        int co=0;

        for(int j=0; j<n; j++)
        {
            if(a[j]>av)
                co++;
        }

        double res=(co*100.00)/n;

        cout<<fixed<<setprecision(3)<<res<<"%"<<endl;
    }

    return 0;
}

