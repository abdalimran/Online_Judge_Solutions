#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    cin.ignore();
 
    while(t--)
    {
        string a;
 
        getline(cin,a);
 
        string ra (a.rbegin(),a.rend());
 
        for(int i=0; i<ra.length(); i++)
        {
            if((ra[i]>=65 && ra[i]<=90) || (ra[i]>=97 && ra[i]<=122))
                ra[i]+=3;
            if(i>=ra.length()/2)
                ra[i]-=1;
        }
 
        cout<<ra<<endl;
 
    }
 
    return 0;
}
