#include <iostream>
 
using namespace std;
 
int main()
{
    int count=0;
    int t=6;
 
    while(t--)
    {
        double n;
        cin>>n;
 
        if(n>0)
            count++;
    }
 
    cout<<count<<" valores positivos"<<endl;
 
    return 0;
}