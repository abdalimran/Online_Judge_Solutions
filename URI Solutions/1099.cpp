#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int a,b,sum=0;
        cin>>a>>b;
 
        int ma=max(a,b);
        int mi=min(a,b);
 
        for(int i=mi+1; i<ma; i++)
        {
            if(i%2!=0)
                sum+=i;
        }
 
        cout<<sum<<endl;
 
    }
 
    return 0;
}