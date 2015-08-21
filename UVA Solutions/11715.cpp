#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double u,v,a,t,s;

    for(int i=1; ;i++)
    {
        scanf("%d",&n);

        if(n==0)
            break;

        double u=0,v=0,s=0,a=0,t=0;

        if(n==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);

            a=(v-u)/t;
            s=(u*t)+(0.5*(a*t*t));
            printf("Case %d: %0.3lf %0.3lf\n",i,s,a);
        }
        else if(n==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);

            t=(v-u)/a;
            s=(u*t)+(0.5*(a*t*t));
            printf("Case %d: %0.3lf %0.3lf\n",i,s,t);
        }
        else if(n==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);

            v=sqrt((u*u)+(2.0*a*s));
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);

            u=sqrt((v*v)-(2.0*a*s));
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",i,u,t);
        }
    }

    return 0;
}

