#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    vector<pair<string,string>> v;
    string s1,s2;

    for(int i=0; i<t; i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        v.push_back(make_pair(s1,s2));
    }

    int n;
    cin>>n;
    cin.ignore();

    while(n--)
    {
        string s;
        getline(cin,s);

        for(int i=0; i<v.size(); i++)
        {
            if(v[i].first==s)
                cout<<v[i].second<<endl;
            else if(v[i].second==s)
                cout<<v[i].first<<endl;
        }
    }

    return 0;
}

