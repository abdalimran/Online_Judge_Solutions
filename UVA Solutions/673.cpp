//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin,s);

        int f=true;

        while(f)
        {
            f=false;
            if(s.find("()")<s.length())
            {
                s.erase(s.find("()"),2);
                f=true;
            }
            if(s.find("[]")<s.length())
            {
                s.erase(s.find("[]"),2);
                f=true;
            }

        }
        if(!s.empty())
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

    return 0;
}
