#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b,i,j,co,sum;

    while(scanf("%d %d",&a,&b)==2)
    {
        sum=0;
        printf("%d %d ",a,b);

        if(a>b)
        {
            int temp=b;
            b=a;
            a=temp;
        }

        for(i=a; i<=b; i++)
        {
            co=1;
            j=i;
            while(j>1)
            {
                if(j%2==0)
                    j=j/2;
                else
                    j=(3*j)+1;
                co++;
            }
            if(co>=sum)
                sum=co;
        }
        printf("%d\n",sum);
    }

    return 0;
}
