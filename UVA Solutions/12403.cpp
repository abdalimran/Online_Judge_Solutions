#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t,a,b=0;
    cin>>t;
    cin.ignore();

    string c;
    while(t--)
    {
        cin>>c;

        if(c=="donate")
        {
            cin>>a;
            b+=a;
        }
        else if(c=="report")
            cout<<b<<endl;
    }

    return 0;
}

