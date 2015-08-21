#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b)==2 && a>=0 && b>=0)
    {
        int ma=max(a,b);
        int mi=min(a,b);

        int ans1=ma-mi;
        int ans2=(99 - ma) + mi+1;

        printf("%d\n",min(ans1,ans2));
    }

    return 0;
}

