#include <iostream>
#include <cstdio>
#include <cmath>

#define pi 2*acos(0.0)

using namespace std;

int main()
{
    double r,n;

    while(scanf("%lf %lf",&r,&n)==2)
        printf("%0.3lf\n",(r*r*n*sin(2*pi/n))/2);

    return 0;
}

