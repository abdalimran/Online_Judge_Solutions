#include <iostream>
 
using namespace std;
 
int main()
{
    double s;
    cin>>s;
 
    if(s>0 && s<=400)
    {
        cout.precision(2);
        cout<<"Novo salario: "<<fixed<<s*.15+s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<s*.15<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
 
    else if(s>=400.01 && s<=800.00)
    {
        cout.precision(2);
        cout<<"Novo salario: "<<fixed<<s*.12+s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<s*.12<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
 
    else if(s>=800.01 && s<=1200.00)
    {
        cout.precision(2);
        cout<<"Novo salario: "<<fixed<<s*.10+s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<s*.10<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
 
    else if(s>=1200.01 && s<=2000.00)
    {
        cout.precision(2);
        cout<<"Novo salario: "<<fixed<<s*.7+s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<s*.7<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
 
    return 0;
}