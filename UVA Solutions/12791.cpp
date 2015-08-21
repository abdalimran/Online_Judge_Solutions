#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f,s;

    while(cin>>f>>s)
    {
        int ft=0, st=0, lap=1;

        while(true)
        {
            if(abs(st-ft) >= f)
                break;
            lap++;
            ft += f;
            st += s;
        }
        cout<<lap<<endl;
    }

    return 0;
}


