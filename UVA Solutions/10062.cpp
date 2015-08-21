/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string s;

    bool f=false;

    while(getline(cin,s))
    {
        if(f==true)
            cout<<endl;

        map<char,int>m;
        vector<pair<int,int>>p;

        for(int i=0; i<s.length(); i++)
            m[s[i]]++;

        for(map<char,int>::iterator it=m.begin(); it!=m.end(); it++)
        {
            p.push_back(make_pair((int)it->first, it->second));
        }

        //Sorting vector of pairs based on the second element of the pair.
        sort(p.begin(), p.end(), [](const pair<int,int> &left, const pair<int,int> &right){return left.second < right.second;});

        for(int i=0; i<p.size(); i++)
        {
            for(int j=i+1;j<p.size();j++)
            {
                if(p[i].second == p[j].second && p[i].first < p[j].first)
                {
                    swap(p[i],p[j]);
                }
            }
        }

        for(int i=0; i<p.size(); i++)
            cout<<p[i].first <<" "<<p[i].second<<endl;

        f=true;
    }

    return 0;
}

