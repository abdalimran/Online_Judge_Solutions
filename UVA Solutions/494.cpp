#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;

    while(getline(cin,s))
    {
        int c = 0;

        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
                c++;
            for(; i < s.length() && isalpha(s[i]); i++);
        }

        cout<<c<<endl;
    }

    return 0;
}
