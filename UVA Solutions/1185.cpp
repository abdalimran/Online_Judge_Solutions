#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    const double PI=acos(-1);
    const double E=2.71828182845904523536028747135266249775724709369995;

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<"1"<<endl;
        else
        {
            int c = ceil(log10(2*PI*n)/2+n*(log10(n/E)));
            cout<<c<<endl;
        }
    }

    return 0;
}

