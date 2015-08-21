#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,t;

    while(scanf("%d %d",&a,&b)==2 && (a!=0 || b!=0))
    {
        int c=0;
        for(int i=a; i<=b; i++)
        {
            int n=sqrt(i);
            if(n*n==i)
                c++;
        }
        printf("%d\n",c);
    }

    return 0;
}

