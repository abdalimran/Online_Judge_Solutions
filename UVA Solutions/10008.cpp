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
    map<char,int>m;
    vector<pair<char,int>>p;

    bool f=false;
    while(t--)
    {
        getline(cin,s);

        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
               m[toupper(s[i])]++;
        }
    }

    for(map<char,int>::iterator it=m.begin(); it!=m.end(); it++)
        p.push_back(make_pair(it->first, it->second));

    sort(p.rbegin(), p.rend(), [](const pair<char,int> &left, const pair<char,int> &right){return left.second < right.second;});

    for(int i=0; i<p.size(); i++)
        cout<<p[i].first <<" "<<p[i].second<<endl;

    f=true;

    return 0;
}


