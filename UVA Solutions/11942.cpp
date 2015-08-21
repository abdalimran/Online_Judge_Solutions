#include <bits/stdc++.h>

using namespace std;

bool isAscending(int *arr, int size)
{
    for (int i=0; i<size-1; i++)
    {
        if (arr[i]>=arr[i+1])
            return false;
    }
    return true;
}

bool isDescending(int *arr, int size)
{
    for (int i=0; i<size-1; i++)
    {
        if (arr[i]<=arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n=10,t,f=1;
    int arr[n];

    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        for(int i=0; i<10; i++)
            cin>>arr[i];

        if(isAscending(arr,10)==true || isDescending(arr,10)==true)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }

    return 0;
}

