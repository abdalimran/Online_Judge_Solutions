#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main ()
{
    string s;

    for(int i=1; ;i++)
    {
        cin>>s;

        if(s.compare("*")==0)
            break;
        else if(s.compare("Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(s.compare("Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
    }

    return 0;
}

