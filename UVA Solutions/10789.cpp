#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPrime (int n)
{
    if(n<2)
        return false;
    for (long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        map<char,int>m;

        string w,r;
        cin>>w;

        for(int i=0; i<w.length(); i++)
            m[w[i]]++;

        map<char,int>::iterator it=m.begin();
        while(it!=m.end())
        {
            if(isPrime(it->second))
                r.push_back(it->first);
            it++;
        }
        if(!r.empty())
            cout<<"Case "<<i<<": "<<r<<endl;
        else
            cout<<"Case "<<i<<": empty"<<endl;
    }

    return 0;
}
