#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    long long n,r;

    while(scanf("%lld",&n) ==1)
    {
        if(n<0)
            break;
        else
            r=(n*(n+1))/2 + 1;

        printf("%lld\n",r);
    }

    return 0;
}
