#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main ()
{
    int arr[100],i,max=0;
 
    for(i=0; i<100; i++)
    {
        cin>>arr[i];
 
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max<<endl;
    auto pos=find(arr,arr+100,max);
    cout<<pos-arr+1<<endl;
 
    return 0;
}