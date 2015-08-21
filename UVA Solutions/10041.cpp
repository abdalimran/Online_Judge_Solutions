#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n,t;
    scanf("%d",&n);

    for(t=0;t<n;t++)
    {
        int n,a[550],i,mid,sum=0;
        scanf("%d",&n);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        sort(a,a+n);

        mid=n/2;
        for(i=0;i<n;i++)
            sum=sum+abs(a[i]-a[mid]);

        printf("%d\n",sum);
    }
    return 0;
}

