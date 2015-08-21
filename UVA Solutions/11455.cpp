#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long a,b,c,d,t;
    vector<long> x(4);

    while(scanf("%ld",&t)==1)
    {
        for(int j=0;j<t;j++)
        {
            for(int i=0;i<4;i++)
                scanf("%ld",&x[i]);

            sort(x.begin(), x.end());

            if(x[0]==x[3])
                printf("square\n");
            else if(x[0]==x[1] && x[2]==x[3])
                printf("rectangle\n");
            else if(x[3]<(x[0]+x[1]+x[2]))
                printf("quadrangle\n");
            else
                printf("banana\n");
        }
    }

    return 0;
}

