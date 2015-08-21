#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        cin.ignore();
        char c[n];
        for(int i=0; i<n; i++)
            cin>>c[i];

        int cB=count(c, c+n, 'B');
        int cW=count(c, c+n, 'W');
        int cT=count(c, c+n, 'T');
        int cA=count(c, c+n, 'A');

        if((cB+cA==n) && cB!=0)
           cout<<"Case "<<i<<": BANGLAWASH"<<endl;
        else if((cW+cA==n) && cW!=0)
            cout<<"Case "<<i<<": WHITEWASH"<<endl;
        else if(cA==n)
            cout<<"Case "<<i<<": ABANDONED"<<endl;
        else if(cW>cB)
            cout<<"Case "<<i<<": WWW "<<cW<<" - "<<cB<<endl;
        else if(cB>cW)
            cout<<"Case "<<i<<": BANGLADESH "<<cB<<" - "<<cW<<endl;
        else if(cB==cW)
            cout<<"Case "<<i<<": DRAW "<<cB<<" "<<cT<<endl;
        else
            cout<<"Case "<<i<<": ABANDONED"<<endl;
    }

    return 0;
}
