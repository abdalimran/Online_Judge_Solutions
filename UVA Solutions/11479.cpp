#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long int t,a,b,c;

    scanf("%ld",&t);

    for(int i=1; i<=t; i++)
    {
         scanf("%ld %ld %ld",&a,&b,&c);

         if((a+b)<=c || (b+c)<=a || (c+a)<=b)
         printf("Case %d: Invalid\n",i);

         else if(a<=0 || b<=0 || c<=0)
         printf("Case %d: Invalid\n",i);

         else if(a==b && b==c)
         printf("Case %d: Equilateral\n",i);

         else if(a==b || b==c || c==a)
         printf("Case %d: Isosceles\n",i);

         else if(a!=b && b!=c && c!=a)
         printf("Case %d: Scalene\n",i);
    }

    return 0;
}
