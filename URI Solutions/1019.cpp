#include <iostream>
 
using namespace std;
 
int main()
{
    int ins,h,m,s;
 
    cin>>ins;
 
    h=ins/3600;
    ins=(ins%3600);
 
    m=ins/60;
    ins=(ins%60);
 
    s=ins;
 
    cout<<h<<":"<<m<<":"<<s<<endl;
 
    return 0;
}
