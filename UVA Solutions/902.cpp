#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s,res;

    while(cin>>n>>s)
    {
        int max=0;
        map<string,int>mymap;

        map<string,int>::iterator it;

        for(int i=0; i<=s.length()-n; i++)
            mymap[s.substr(i,n)]++;

        for(it=mymap.begin(); it!=mymap.end(); it++)
        {
            if((*it).second>max)
            {
                res=(*it).first;
                max=(*it).second;
            }
        }

        cout<<res<<endl;
    }

    return 0;
}
