#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    double x,y;
 
    cin>>x>>y;
 
    cout<<fixed<<setprecision(2);
 
    if (x==1)
        cout<<"Total: R$ "<<4.00*y<<endl;
    else if (x==2)
        cout<<"Total: R$ "<<4.50*y<<endl;
    else if (x==3)
        cout<<"Total: R$ "<<5.00*y<<endl;
    else if (x==4)
        cout<<"Total: R$ "<<2.00*y<<endl;
    else if (x==5)
        cout<<"Total: R$ "<<1.5*y<<endl;
 
    return 0;
}
