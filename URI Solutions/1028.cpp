#include <iostream>
 
using namespace std;
 
int GCD(int u, int v)
{
    while ( v != 0)
    {
        int r = u % v;
        u = v;
        v = r;
    }
    return u;
}
 
int main()
{
    int t,a,b;
    cin>>t;
 
    while(t--)
    {
        cin>>a>>b;
        cout<<GCD(a,b)<<endl;
    }
 
    return 0;
}
