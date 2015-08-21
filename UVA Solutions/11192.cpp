#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int n;
    string s;

    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>s;
        int l=s.length();

        int g=l/n;

        for(int i=1; i<=n; i++)
        {
            int a=i*g;

            for(int j=a-1;j>=a-g;j--)
            cout<<s[j];
        }
        cout<<endl;
    }

    return 0;
}

