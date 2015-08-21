#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int arr[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];

        int c=0;

        bool not_swapped = true;   //Using Bubble Sort
        int j = 0;
        while (not_swapped)
        {
            not_swapped = false;
            j++;
            for (int i=0; i<n-j; i++)
            {
                if (arr[i] > arr[i+1])
                {
                    swap(arr[i],arr[i+1]);    //Use <algorithm> for the function swap()
                    not_swapped = true;
                    c++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }

    return 0;
}
