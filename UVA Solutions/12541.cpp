//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    string n;
    int d,m,y;
    int t;

    while(cin>>t)
    {
        vector<pair<string,int>>p;
        while(t--)
        {
            cin>>n>>d>>m>>y;
            int date=(y*365)+(m*30)+d;
            p.push_back(make_pair(n,date));
        }

        //Sorting vector of pairs based on the second element of the pair.
        sort(p.begin(), p.end(), [](const pair<string,int> &left, const pair<string,int> &right){return left.second < right.second;});

        cout<<p[p.size()-1].first<<"\n"<<p[0].first<<endl;
    }

    return 0;
}

