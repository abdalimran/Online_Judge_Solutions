#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t,n;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int c=0,r=0;
        cin>>n;
        cin.ignore();
        bool f=false;

        while(n--)
        {
            char ch;
            cin>>ch;
            if(f)
                continue;
            if(ch=='W')
                c=0;
            else
            {
                c++;
                if(c==3)
                    f=true;
            }
            r++;
        }

        if(!f)
            cout<<"Case "<<i<<": Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}

