#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y,z;
 
    cin>>x>>y>>z;
 
    if (x>y&&y>z)
        cout<<z<<"\n"<<y<<"\n"<<x<<endl;
 
    else if (x>z&&z>y)
        cout<<y<<"\n"<<z<<"\n"<<x<<endl;
 
    else if (y>z&&z>x)
        cout<<x<<"\n"<<z<<"\n"<<y<<endl;
 
    else if (y>x&&x>z)
        cout<<z<<"\n"<<x<<"\n"<<y<<endl;
 
    else if (z>x&&x>y)
        cout<<y<<"\n"<<x<<"\n"<<z<<endl;
 
    else if (z>y&&y>x)
        cout<<x<<"\n"<<y<<"\n"<<z<<endl;
 
    cout<<"\n"<<x<<"\n"<<y<<"\n"<<z<<endl;
 
    return 0;
}