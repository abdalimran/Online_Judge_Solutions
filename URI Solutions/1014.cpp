#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    int x;
    double y,avrg;
 
    cin>>x>>y;
 
    avrg=x/y;
 
    cout<<fixed<<setprecision(3);
    cout<<avrg<<" km/l"<<endl;
 
 
    return 0;
}
