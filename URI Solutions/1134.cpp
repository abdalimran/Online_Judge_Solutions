#include <iostream>
 
using namespace std;
 
int main()
{
    int n, v[]={0,0,0};
 
    while (cin>>n && n!=4)
    {
        if (n>=1 && n<=3)
            v[n-1]++;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<v[0]<<endl;
    cout<<"Gasolina: "<<v[1]<<endl;
    cout<<"Diesel: "<<v[2]<<endl;
 
    return 0;
}