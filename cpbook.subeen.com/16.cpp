/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    for(int a=0;a<t;a++)
    {
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<"*";
            }

            cout<<endl;
        }
    }

    return 0;
}
