#include <iostream>
 
using namespace std;
 
int main ()
{
    int n1,n2,s=0;
 
    cin>>n1>>n2;
 
    if(n1<n2)
    {
        for(int i=n1+1; i<n2; i++)
            if(i%2!=0)
                s+=i;
    }
 
    else
    {
        for(int i=n2+1; i<n1; i++)
            if(i%2!=0)
                s+=i;
    }
 
    cout<<s<<endl;
 
    return 0;
}