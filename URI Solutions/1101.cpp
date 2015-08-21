#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b;
 
    while(cin>>a>>b && (a>0 && b>0))
    {
        int sum=0;
 
        if (a<b)
        {
            int temp = b; b = a; a = temp;
        }
 
        for(int i=b; i<=a; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
    }
 
    return 0;
}