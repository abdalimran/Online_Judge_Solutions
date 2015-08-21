/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int month[13]={0,0,3,3,6,1,4,6,2,5,0,3,5};
    string days[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};

    int t;
    cin>>t;
    while(t--)
    {
        int m,d;
        cin>>m>>d;

        d=(d+month[m])%7;
        cout<<days[d]<<endl;
    }


    return 0;
}


