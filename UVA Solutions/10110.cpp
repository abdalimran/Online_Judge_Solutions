#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main ()
{
    unsigned int n,i;

    while(scanf("%u",&n)==1)
    {
        if(n==0)
            break;
        i=sqrt(n);

        if(n==i*i)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
