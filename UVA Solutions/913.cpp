#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    long int n;

    while(cin>>n)
    {
        long long odd=(n*(n+2))/2;
        long long sum=(3*odd)-6;

        cout<<sum<<endl;
    }

    return 0;
}

