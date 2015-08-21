#include <iostream>
 
using namespace std;
 
int main ()
{
    int t,n,ci=0,co=0;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
 
        if(n>=10 && n<=20)
            ci++;
        else
            co++;
    }
 
    cout<<ci<<" in"<<endl;
    cout<<co<<" out"<<endl;
 
    return 0;
}