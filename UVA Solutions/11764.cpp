/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int w,ilen,h=0,l=0;
        cin>>w>>ilen;

        for(int i=1; i<w; i++)
        {
            int len;
            cin>>len;

            if(ilen>len)
                h++;
            else if(ilen<len)
                l++;
            ilen=len;
        }
        printf("Case %d: %d %d\n",i,l,h);
    }

    return 0;
}


