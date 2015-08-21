#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b;
 
    cin>>a>>b;
 
    if(a<b && b%a==0)
        cout<<"Sao Multiplos"<<endl;
    else if(b<a && a%b==0)
        cout<<"Nao sao Multiplos"<<endl;
 
    return 0;
}