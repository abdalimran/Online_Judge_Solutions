#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    string s;
    int count=0;
    while(getline(cin,s))
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='"')
            {
                count++;
                if(count%2==1)
                    cout<<"``";
                else
                    cout<<"''";
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}

