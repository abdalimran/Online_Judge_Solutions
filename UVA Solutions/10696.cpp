#include <bits/stdc++.h>

using namespace std;

int f91(int N)
{
    if(N>100)
        return N-10;
    else
        return f91(f91(N+11));
}


int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n;

    while(cin>>n && n!=0)
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;

    return 0;
}

