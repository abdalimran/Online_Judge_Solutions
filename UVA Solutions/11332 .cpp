#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int digitSum(long long n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    return s;
}

int main()
{
    int n;

    for(int i=1; ;i++)
    {
        scanf("%d",&n);
        int r=n;

        if(n==0)
            break;

        while(r>9)
        {
            r=digitSum(n);
            n=r;
        }
        printf("%d\n",r);
    }

    return 0;
}

