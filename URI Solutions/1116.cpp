#include <iostream>
 
using namespace std;
 
int main ()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        double x,y;
        cin>>x>>y;
 
        if(y==0.0)
            cout<<"divisao impossivel"<<endl;
        else
        {
            cout.precision(1);
            cout<<fixed<<x/y<<endl;
        }
    }
 
    return 0;
}