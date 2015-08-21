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

        if(s.compare("#")==0)
            break;
        else if(s.compare("HELLO")==0)
            printf("Case %d: ENGLISH\n",i);
        else if(s.compare("HOLA")==0)
            printf("Case %d: SPANISH\n",i);
        else if(s.compare("HALLO")==0)
            printf("Case %d: GERMAN\n",i);
        else if(s.compare("BONJOUR")==0)
            printf("Case %d: FRENCH\n",i);
        else if(s.compare("CIAO")==0)
            printf("Case %d: ITALIAN\n",i);
        else if(s.compare("ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",i);
        else
            printf("Case %d: UNKNOWN\n",i);
    }

    return 0;
}
