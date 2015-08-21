#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int x[10];
 
    for(int i=0; i<10; i++)
        cin>>x[i];
 
    for(int j=0; j<10; j++)
    {
        if(x[j]<0 ||x[j]==0)
            x[j]=1;
    }
 
    for(int i=0; i<10; i++)
        cout<<"X["<<i<<"] = "<<x[i]<<endl;
 
    return 0;
}