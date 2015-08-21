#include <bits/stdc++.h>

using namespace std;

bool repeated(int n)
{
      map<int ,int>mp;
      while(n)
      {
            int m=n%10;
            n/=10;
            mp[m]++;

            if(mp[m]==2)
                return 0;
      }
      return true;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n,m;

    while(cin>>n>>m)
    {
        int c=0;

        for(int i=n; i<=m; i++)
        {
            if(repeated(i)==true)
                c++;
        }

        cout<<c<<endl;
    }

    return 0;
}


