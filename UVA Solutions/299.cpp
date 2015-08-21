#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int c=0;

        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        bool not_swapped = true;    //Bubble Sort
        int j = 0;
        while (not_swapped)
        {
            not_swapped = false;
            j++;
            for (int i = 0; i < n - j; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i],arr[i+1]);
                    not_swapped = true;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}

