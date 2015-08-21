/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int n,s,e;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>s>>e;

        cout<<"Case "<<i<<": ";

        for(int j=1; j<=e; j++)
        {
            if(s*j<=e)
                cout<<s*j<<" ";
            else if(s*j>e)
                break;
        }
        cout<<endl;
    }

    return 0;
}

