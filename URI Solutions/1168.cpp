#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        string num;
        int sum=0;
        cin>>num;
 
        for(int i=0; i<num.length(); i++)
        {
            if(num[i]=='0')
                sum+=6;
            else if(num[i]=='1')
                sum+=2;
            else if(num[i]=='2')
                sum+=5;
            else if(num[i]=='3')
                sum+=5;
            else if(num[i]=='4')
                sum+=4;
            else if(num[i]=='5')
                sum+=5;
            else if(num[i]=='6')
                sum+=6;
            else if(num[i]=='7')
                sum+=3;
            else if(num[i]=='8')
                sum+=7;
            else if(num[i]=='9')
                sum+=6;
        }
        cout<<sum<<" leds"<<endl;
    }
    return 0;
}