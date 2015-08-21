#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        long long r=(((((n*567)/9)+7492)*235)/47)-498;

        string s=to_string(r);

        cout<<s[s.length()-2]<<endl;
    }

    return 0;
}

