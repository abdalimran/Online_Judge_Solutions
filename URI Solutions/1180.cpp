#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int p,mi=0;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<mi)
        {
            mi=arr[i];
            p=i;
        }
    }
 
    cout<<"Menor valor: "<<mi<<endl;
    cout<<"Posicao: "<<p<<endl;
 
    return 0;
}