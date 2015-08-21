#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int a,b,c;
    char s1,s2;
    string r;

    while(cin>>a>>s1>>b>>s2>>r)
    {
        if(s1=='+')
        {
            if(a+b==atoi(r.c_str()))
                c++;
        }
        else if(s1=='-')
        {
            if(a-b==atoi(r.c_str()))
                c++;
        }
    }

    cout<<c<<endl;

    return 0;
}
