/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,n,l;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n>>l;

        cout<<"Case "<<i<<":"<<endl;

        for(int j=1; j<=l; j++)
        {
            for(int k=0; k<j; k++)
                {
                   cout<<n;
                }

            cout<<endl;
        }
    }

    return 0;
}

