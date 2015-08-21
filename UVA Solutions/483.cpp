#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    string s;

    while(getline(cin,s))
    {
         vector<string>v;
         istringstream ss(s);

         string w;

         while(ss>>w)
         {
             reverse(w.begin(),w.end());
             v.push_back(w);
         }

         for(int i=0; i<v.size(); i++)
         {
             cout<<v[i];
             if(i<v.size()-1)
                cout<<" ";
         }
         cout<<endl;
    }

    return 0;
}

