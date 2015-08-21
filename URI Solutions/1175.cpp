#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n[20];
 
    for(int i=0; i<20; i++)
        cin>>n[i];
    reverse(begin(n),end(n));
 
    for(int i=0; i<20; i++)
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
 
    return 0;
}