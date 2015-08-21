#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int t1,t2,f,a,ct1,ct2,ct3,sum=0,ct;

        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);

        if(ct1<=ct2 && ct1<=ct3)
            ct=(ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
            ct=(ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
            ct=(ct1+ct2)/2;

        sum = t1+t2+f+a+ct;

        if(sum>=90)
            printf("Case %d: A\n",i);
        else if(sum>=80)
            printf("Case %d: B\n",i);
        else if(sum>=70)
            printf("Case %d: C\n",i);
        else if(sum>=60)
            printf("Case %d: D\n",i);
        else if(sum<60)
            printf("Case %d: F\n",i);
    }

    return 0;
}
