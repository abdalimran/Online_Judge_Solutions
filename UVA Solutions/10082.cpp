#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string s,m="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while(getline(cin,s))
    {
        string out;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!='A' && s[i]!='Q' && s[i]!='Z' && s[i]!=' ')
            {
                int p=m.find(s[i]);
                char ch=m[p-1];
                out.push_back(ch);
            }
            else
            {
                char ch=s[i];
                out.push_back(ch);
            }
        }
        cout<<out<<endl;
    }

    return 0;
}

