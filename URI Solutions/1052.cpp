#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string monthName[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August",
                        "September", "October", "November", "December"
                         };
    int n;
    cin>>n;
 
    cout<<monthName[n-1]<<endl;
 
    return 0;
}