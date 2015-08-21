#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a,b,s;
    while(scanf("%lf %lf",&a,&b) == 2)
    {
        s=pow(b,1/a);
        printf("%.0lf\n",s);
    }
    return 0;
}
