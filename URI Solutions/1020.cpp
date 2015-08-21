#include <iostream>
 
using namespace std;
 
int main()
{
    int ind,y,m,d;
 
    cin>>ind;
 
    y=ind/365;
    ind=(ind%365);
 
    m=ind/30;
    ind=(ind%30);
 
    d=ind;
 
    cout<<y<<" ano(s)"<<endl;
        cout<<m<<" mes(es)"<<endl;
        cout<<d<<" dia(s)"<<endl;
 
    return 0;
}
