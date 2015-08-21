#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main ()
{
    int t[3];

    while(1)
    {
        for(int j=0; j<3; j++)
            scanf("%d",&t[j]);

        sort(t,t+3);

        if(t[0]==0 && t[1]==0 && t[2]==0)
            break;
        else
        {
            if((t[0]*t[0]+t[1]*t[1])==(t[2]*t[2]))
                printf("right\n");
            else
                printf("wrong\n");
        }

    }

    return 0;
}
