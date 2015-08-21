#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string n;

    while(cin>>n && n!="0")
    {
        int sum=0,t,y;

        for(int i=0;i<n.length();i+=2)
        {
            sum+=n[i]-'0';
            if(i<n.length()-1)
                sum-=n[i+1]-'0';

        }
        if(sum%11==0)
            cout<<n<<" is a multiple of 11."<<endl;
        else
            cout<<n<<" is not a multiple of 11."<<endl;
    }

    return 0;
}
