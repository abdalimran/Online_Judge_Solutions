/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n,sum=0;
    vector<int>v;

    while(cin>>n)
    {
        v.push_back(n);

        sort(v.begin(),v.end());

        if(v.size()%2==1)
            cout<<v[(v.size()+1)/2-1]<<endl;
        else
            cout<<(v[(v.size()+1)/2-1]+v[(v.size()+1)/2])/2<<endl;
    }

    return 0;
}


