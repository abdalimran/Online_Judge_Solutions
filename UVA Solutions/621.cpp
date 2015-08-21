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
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        if(s=="1" || s=="4" || s=="78")
            cout<<"+"<<endl;
        else if(s[s.length()-1]=='5' && s[s.length()-2]=='3')
            cout<<"-"<<endl;
        else if(s[s.length()-1]=='4' && s[0]=='9')
            cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<"?"<<endl;
    }
    return 0;
}

