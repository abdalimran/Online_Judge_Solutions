#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    string name;
    double salary,value,total;
    const double bonous = .15;
 
    cin>>name>>salary>>value;
 
    total=salary+(value*bonous);
 
    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<total<<endl;
 
    return 0;
}
