#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    double a,b,c,avrg;
 
    cin>>fixed>>setprecision(1);
    cin>>a>>b>>c;
 
    avrg=((a*2)+(b*3)+(c*5))/(2+3+5);
 
    cout<<fixed<<setprecision(1);
 
    cout<<"MEDIA = "<<avrg<<endl;
 
    return 0;
}
