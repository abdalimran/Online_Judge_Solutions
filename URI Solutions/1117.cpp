#include <iostream>
 
using namespace std;
 
int main()
{
    double n, s=0.0;
    int c=0;
 
    while(c<2)
    {
        cin>>n;
        if (n >= 0.0 && n <= 10.0)
        {
            c++;
            s += n;
        }
        else
            cout<<"nota invalida"<<endl;
 
    }
    cout.precision(2);
    cout<<fixed<<"media = "<<s/2.0<<endl;
 
    return 0;
}