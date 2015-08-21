#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int c,f;
        cin>>c>>f;

        double C=((5.0/9.0)*f)+c;

        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<C<<endl;
    }

    return 0;
}



