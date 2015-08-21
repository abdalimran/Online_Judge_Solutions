#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    double a,b,avrg;
 
    cin>>fixed>>setprecision(1);
    cin>>a>>b;
 
    avrg=((a*3.5)+(b*7.5))/(3.5+7.5);
 
    cout<<fixed<<setprecision(5);
 
    cout<<"MEDIA = "<<avrg<<endl;
 
    return 0;
}
