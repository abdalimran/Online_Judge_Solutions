#include <iostream>
#include <cmath>
 
using namespace std;
 
int greatest (int x, int y)
{
    int bigger= ((x+y)+abs(x-y))/2;
 
    return bigger;
}
 
int main ()
 
{
    int a,b,c,bigger;
 
    cin>>a>>b>>c;
 
    bigger=greatest(a,b);
 
 
    if(bigger>c)
        cout<<bigger<<" eh o maior"<<endl;
    else
        cout<<c<<" eh o maior"<<endl;
 
 
    return 0;
}
