/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": ";

        for(int j=1; j<=n; j++)
        {
            if(n%j==0)
                cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

