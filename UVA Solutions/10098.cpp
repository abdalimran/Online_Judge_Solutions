/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;
    cin.ignore();

    string s;

    while(t-- && cin>>s)
    {
        sort(s.begin(),s.end());

        do
            cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()));

        cout<<endl;
    }

    return 0;
}


