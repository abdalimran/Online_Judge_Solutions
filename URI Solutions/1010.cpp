#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    int p1,p2,u1,u2;
    double pr1,pr2,total;
 
    cin>>p1>>u1>>pr1;
    cin>>p2>>u2>>pr2;
 
    total=(u1*pr1)+(u2*pr2);
 
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<total<<endl;
 
    return 0;
}
