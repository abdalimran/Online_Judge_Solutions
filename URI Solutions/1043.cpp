#include <iostream>
 
using namespace std;
 
int main()
{
    double a,b,c;
 
    cin>>a>>b>>c;
 
    if(a<b+c && b<a+c && c<b+a)
    {
        cout.precision(1);
        cout<<"Perimetro = "<<fixed<<a+b+c<<endl;
    }
    else
    {
        cout.precision(1);
        cout<<"Area = "<<fixed<<c*(a+b)/2<<endl;
    }
    return 0;
}