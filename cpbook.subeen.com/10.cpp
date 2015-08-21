/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <cmath>

using namespace std;

int isprime(int num);

int main()
{
    int n;

    cin>>n;

    while(n--)
    {
        int arr[10];
        int count=0;

        for(int i=0; i<10; i++)
        {
            cin>>arr[i];

            if(isprime(arr[i])==1)
                count++;
        }

        cout<<count<<endl;
    }


    return 0;
}

int isprime(int num)
{
    bool flag = true;

    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            flag = false;
            break;
        }
    }

    if(flag==true && num>1)
        return 1;
}
