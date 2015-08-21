#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a+b>c && b+c>a && a+c>b)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }

    return 0;
}
