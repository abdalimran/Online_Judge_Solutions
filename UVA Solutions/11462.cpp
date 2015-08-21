#include <iostream>

using namespace std;

void counting_sort(int array[],int size,int range)
{
    int i=0,j=0;
    int *c = new int[range+1];
    int *result = new int[size];  // result-output, c-temporary array

    for(i=0;i<range;i++)
        c[i]=0;                  // initialize c to 0

    for(i=0;i<size;i++)
         c[array[i]]++;          // count the numbers

    for(i=1;i<range;i++)
        c[i]=c[i]+c[i-1];        // determine the position of numbers

    for(j=size-1;j>-1;j--)
    {
        result[c[array[j]]-1]=array[j];
        c[array[j]]--;
    }

    printf("%d",result[0]);

    for(int i=1;i<size;i++)
        printf(" %d",result[i]);

    printf("\n");
}

int main()
{
    int n;

    while(scanf("%d",&n) && n!=0)
    {
        int input[n];

        for(int i=0; i<n; i++)
            cin>>input[i];

        counting_sort(input,n,100);
    }

    return 0;
}
