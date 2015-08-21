#include <iostream>
 
using namespace std;
 
int main()
{
    double s;
    cin>>s;
 
    if (s <= 2000.0)
        cout<<"Isento"<<endl;
 
    else if (s <= 3000.0)
    {
        cout.precision(2);
        cout<<"R$ "<<fixed<<(s - 2000.0) * 0.08<<endl;
    }
 
    else if (s <= 4500.0)
    {
        cout.precision(2);
        cout<<"R$ "<<fixed<<1000.0 * 0.08 + (s - 3000.0) * 0.18<<endl;
    }
 
    else
    {
        cout.precision(2);
        cout<<"R$ "<<fixed<<1000.0 * 0.08 + 1500.0 * 0.18 + (s - 4500.0) * 0.28<<endl;
    }
 
 
    return 0;
}