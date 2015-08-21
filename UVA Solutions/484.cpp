#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    map<int,int>mp;
    queue<int>sq;

    int n;
    while(cin>>n)
    {
        if(mp[n]==0)
            sq.push(n);
        mp[n]++;
    }
    while(sq.size())
    {
        cout<<sq.front()<<" "<<mp[sq.front()]<<endl;
        sq.pop();
    }

    return 0;
}

