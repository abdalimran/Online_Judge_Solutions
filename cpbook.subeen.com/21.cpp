/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    int arr[t];

    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }


    for(int j=0; j<t; j++)
    {
        if(arr[j]%2==0)
            cout<<"red"<<endl;
        else
            cout<<"blue"<<endl;
    }


    return 0;
}

