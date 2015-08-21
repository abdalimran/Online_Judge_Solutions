#include <iostream>
 
using namespace std;
 
int main()
{
    int f=0,s=1,t,n;
 
    cin>>n;
 
    cout<<f<<" "<<s;
 
    n=n-2;
 
    while(n--)
    {
        t=f+s;
        cout<<" "<<t;
        f=s;
        s=t;
    }
    cout<<endl;
 
    return 0;
}