#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n,b;

    while(cin>>n>>b)
    {
        int sum=n;
        while(n>=b)
        {
            sum+=n/b;
            n=n/b+(n%b);
        }
        cout<<sum<<endl;
    }

    return 0;
}
