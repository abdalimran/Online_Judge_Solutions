#include <iostream>
#include <cstdio>

using namespace std;

long long revInt(long long num)
{
    long long rev=0;
    if(num>=10)
    {
        while(num!=0)
        {
            rev=rev*10+num%10;
            num/=10;
        }
        return rev;
    }
    else
        return num;
}

int main()
{
    long long n,rn,sum;
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int c=0;

        scanf("%lld",&n);
        do
        {
            rn=revInt(n);
            sum=n+rn;
            c++;

            if(sum==revInt(sum))
            {
                printf("%d %lld\n",c,sum);
                break;
            }
            n=sum;
        }
        while(sum!=revInt(sum));
    }

    return 0;
}
