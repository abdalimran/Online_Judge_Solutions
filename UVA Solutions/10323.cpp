#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    long long int n,r;

    while (scanf("%lld",&n)==1)
    {
        if(n<=7 && n>=0)
            printf("Underflow!\n");
        else if(n<0)
        {
            n=-n;
            if(n%2==1)
                printf("Overflow!\n");
            else if(n%2==0)
                printf("Underflow!\n");
        }
        else if(n>7 && n<=13)
        {
            r=40320;
            for(int i=9;i<=n;i++)
                r=r*i;
            printf("%lld\n",r);
        }
        else printf("Overflow!\n");
    }

    return 0;
}


