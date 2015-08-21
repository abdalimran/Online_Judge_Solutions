#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    int a,b,j=1;

    while(scanf("%d",&a)==1 && (a>=0))
    {
        if(a==1)
            printf("Case %d: 0\n",j);

        for(int i=0;i<14;i++)
            if(pow(2,i)<a && a<=pow(2,i+1))

        printf("Case %d: %d\n",j,i+1);

        j++;
    }
    return 0;
}

