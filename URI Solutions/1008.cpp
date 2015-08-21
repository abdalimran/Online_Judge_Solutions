#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    int num,hr;
    double pay,salary;
 
    cin>>num>>hr>>pay;
 
    salary=hr*pay;
 
    cout<<"NUMBER = "<<num<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<salary<<endl;
 
    return 0;
}
