#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;

    while (cin>>a>>b)
    {
        if(b>a)
        {
            c=b-a;
            cout<<c<<endl;
        }
        else
        {
            c=a-b;
            cout<<c<<endl;
        }
    }

    return 0;
}
