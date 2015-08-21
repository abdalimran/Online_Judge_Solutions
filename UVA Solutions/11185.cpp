#include <iostream>

using namespace std;

int main()
{
    long long int dec,rem,i=1,sum=0;

    while(cin>>dec)
    {
        if(dec<0)
            break;
        do
        {
            rem=dec%3;
            sum=sum + (i*rem);
            dec=dec/3;
            i=i*10;
        }
        while(dec>0);

        cout<<sum<<endl;
        sum=0;
        i=1;
    }

    return 0;
}
