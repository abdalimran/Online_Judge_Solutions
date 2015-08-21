#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ch;

    while(cin>>ch)
    {
        int sum=0;

        for(int i=0; i<ch.length(); i++)
        {
            if(ch[i] >= 'a' && ch[i] <= 'z')
                sum += ch[i]-'a'+1;
            else if(ch[i] >= 'A' && ch[i] <='Z')
                sum += ch[i]-'A'+27;
        }

        bool flag=true;

        for(int i=2; i<sum; i++)
        {
           if(sum%i==0)
           {
               flag=false;
                  break;
           }
        }

        if(flag==true)
             printf("It is a prime word.\n");
        else
		     printf("It is not a prime word.\n");
    }

    return 0;
}


