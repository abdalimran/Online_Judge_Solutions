#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string s;

    while(getline(cin,s))
    {
        if(s[0] != '|')
            continue;
        char c=0;
        for(int i=0; s[i]; i++)
        {
            if (s[i]==' ' || s[i]=='o')
                c<<=1;
            if (s[i]=='o')
                c++;
        }
        cout<<c;
    }

    return 0;
}

