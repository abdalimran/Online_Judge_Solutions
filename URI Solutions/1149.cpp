#include <iostream>
 
using namespace std;
 
int main()
{
    int a,n,sum;
 
    cin>>a>>n;
    sum=a;
    while(n<=0)
        cin>>n;
    for(int i=1; i<n; i++)
        sum+=++a;
    cout<<sum<<endl;
 
    return 0;
}