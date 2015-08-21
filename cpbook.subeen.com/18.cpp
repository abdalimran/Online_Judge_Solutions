/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main ()
{
    int t;
    cin>>t;

    int r,l,w;

    while(t--)
    {
        cin>>r>>l>>w;

        double cake = 2*r;

        if(cake<=l && cake<=w)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
