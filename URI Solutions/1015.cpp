#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main ()
 
{
    int x1,y1,x2,y2;
    double distance;
 
    cin>>x1>>y1>>x2>>y2;
 
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 
    cout<<fixed<<setprecision(4);
    cout<<distance<<endl;
 
 
    return 0;
}
