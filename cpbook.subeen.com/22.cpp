/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            for(int s=n-i; s>0; s--)
            {
               cout<<" ";
            }

            int j=0;

            while(j != (2*i-1))
            {
               cout<<"*";
               j++;
            }

            cout<<endl;
        }
    }

    return 0;
}

