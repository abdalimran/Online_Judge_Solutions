#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        string a,b;
 
        cin>>a;
        cin>>b;
 
        if(a.find(b)<=a.length())
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
 
    return 0;
}