#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    int time,speed;
    double fuel;
 
    cin>>time>>speed;
 
    fuel=(time*speed)/12.0;
 
 
    cout<<fixed<<setprecision(3);
 
    cout<<fuel<<endl;
 
 
    return 0;
}
