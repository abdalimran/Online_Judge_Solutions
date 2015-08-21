#include <iostream>
 
using namespace std;
 
int main()
{
    double n,sum=0,c=0;
 
    while(cin>>n && n>0)
    {
        c++;
        sum+=n;
    }
    cout.precision(2);
    cout<<fixed<<sum/c<<endl;
 
    return 0;
}