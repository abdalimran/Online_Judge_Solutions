/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n[3],t;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        for(int j=0; j<3; j++)
            cin>>n[j];

        sort(n,n+3);

        cout<<"Case "<<i<<": ";

        for(int k=0; k<3; k++)
            cout<<n[k]<<" ";
        cout<<endl;
    }

    return 0;
}

