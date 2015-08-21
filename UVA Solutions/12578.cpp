#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    const double pi=acos(-1);

    int t,l;
    cin>>t;

    while(t--)
    {
        cin>>l;

        double w=l*6/10.0;
        double r=l*2/10.0;

        double carea=pi*r*r;
        double rarea=(l*w)-carea;

        cout<<fixed<<setprecision(2)<<carea<<" "<<rarea<<endl;

    }


    return 0;
}

