#include <iostream>
 
using namespace std;
 
int main()
{
    double s=1.0, x=2.0;
 
    for(double i=3.0; i<=39; i+=2)
    {
       s+=i/x;
       x*=2;
    }
    cout.precision(2);
    cout<<fixed<<s<<endl;
 
    return 0;
}