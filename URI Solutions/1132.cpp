#include <iostream>
 
using namespace std;
 
int sum (int x, int y)
{
    int sum =0;
 
    for(int i=x; i<=y; i++)
     {
        if(i%13!=0)
        {
            sum+=i;
        }
     }
 
     return sum;
}
 
 
int main()
{
     int x,y;
 
     cin>>x>>y;
 
     if(x<y)
        cout<<sum(x,y)<<endl;
 
     else if(y<x)
        cout<<sum(y,x)<<endl;
 
 
     return 0;
}