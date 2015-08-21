#include <iostream>
 
using namespace std;
 
int main ()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        double a,b,c,sum=0;
        cin>>a>>b>>c;
 
        sum=(a*2.0 + b*3.0 + c*5.0)/10.0;
 
        cout.precision(1);
 
        cout<<fixed<<sum<<endl;
 
    }
 
    return 0;
}