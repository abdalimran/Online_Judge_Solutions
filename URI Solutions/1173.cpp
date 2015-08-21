#include <iostream>
 
using namespace std;
 
int main()
{
    int n[10],num;
    cin>>num;
    n[0]=num;
    cout<<"N[0] = "<<num<<endl;
 
    for(int i=1,j=2; i<10; i++)
    {
        num*=2;
        cout<<"N["<<i<<"] = "<<num<<endl;
    }
 
    return 0;
}