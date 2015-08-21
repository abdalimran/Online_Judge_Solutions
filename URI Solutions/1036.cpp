#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main()
{
    double a,b,c,r1,r2,x;
 
    cin>>a>>b>>c;
 
    x=pow(b,2)-(4*a*c);
 
    if(x>0 && a!=0)
    {
        x = sqrt(x);
        r1 = (-b+x)/(2*a);
        r2 = (-b-x)/(2*a);
 
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<r1<<endl;
        cout<<"R2 = "<<r2<<endl;
    }
 
    else
        cout<<"Impossivel calcular"<<endl;
 
    return 0;
}
