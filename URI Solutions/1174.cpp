#include <iostream>
 
using namespace std;
 
int main()
{
    double n[100];
 
    for(int i=0; i<100; i++)
    {
        cin>>n[i];
        if(n[i]<=10.0)
            cout<<"A["<<i<<"] = "<<n[i]<<endl;
    }
 
    return 0;
}