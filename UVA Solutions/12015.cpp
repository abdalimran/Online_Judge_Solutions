#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    string s,r;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
       int m=-1,a;

       for(int j=0; j<10; j++)
       {
            cin>>s>>a;

            if(a==m)
                r=r+ s+"\n";
            if(a>m)
            {
                r=s+"\n";
                m=a;
            }
       }
       cout<<"Case #"<<i<<':'<<endl<<r;
    }

    return 0;
}



