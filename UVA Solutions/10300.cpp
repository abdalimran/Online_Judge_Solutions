#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t,n;
    long long a,b,c,sum;

    while(scanf("%d",&t) == 1)
    {
        for(int i=0; i<t; i++)
        {
            scanf("%d", &n);

            sum=0;

            for(int j=0; j<n; j++)
            {
                scanf("%lld %lld %lld", &a,&b,&c);
                sum+=a*c;
            }
            printf("%lld\n",sum);
        }
    }

    return 0;
}

