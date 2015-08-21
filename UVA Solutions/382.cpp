#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int per(int n)
{
    int sum=0;

    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
            sum+=i;
    }

    return sum;
}

int main()
{
    int n;
    vector<int>num;

    while(scanf("%d",&n) && n!=0)
        num.push_back(n);

    printf("PERFECTION OUTPUT\n");

    for(int i=0; i<num.size();i++)
    {
        if(per(num[i])==num[i])
            printf("%5d  PERFECT\n",num[i]);
        else if(per(num[i])>num[i])
            printf("%5d  ABUNDANT\n",num[i]);
        else if(per(num[i])<num[i])
            printf("%5d  DEFICIENT\n",num[i]);
    }

    printf("END OF OUTPUT\n");


    return 0;
}


