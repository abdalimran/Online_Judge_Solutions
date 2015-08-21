#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    double m1,m2,m3;

    while(cin>>m1>>m2>>m3)
    {
        double sm=(m1+m2+m3)/2.0;
        double area= (4/3.0)*(sqrt(sm*(sm-m1)*(sm-m2)*(sm-m3)));

        if(!(area>0))
            area=-1.0;

        cout<<fixed<<setprecision(3)<<area<<endl;
    }

    return 0;
 }

