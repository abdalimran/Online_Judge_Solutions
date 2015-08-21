#include <iostream>
 
using namespace std;
 
int main()
{
    double s=0;
 
    for(int i=1.0; i<=100; i++)
    {
       s+=1/(double)i;
    }
    cout.precision(2);
    cout<<fixed<<s<<endl;
 
    return 0;
}