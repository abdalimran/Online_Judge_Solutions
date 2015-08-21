#include <iostream>
 
using namespace std;
 
int main()
{
    int x,z,sum=0,n=0;
 
    cin>>x;
 
    while(cin>>z && z<=x);
 
    for(int i=x; sum<=z; i++)
    {
        sum+=x++;
        n++;
    }
 
    cout<<n<<endl;
 
    return 0;
}