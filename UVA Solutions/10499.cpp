#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	long long n,p;

	while(scanf("%lld",&n)==1 && n>=0)
    {
        p=n*25;
        if(n==1)
            printf("0%%\n");
        else
            printf("%lld\%\n",p);
    }

	return 0;
}
