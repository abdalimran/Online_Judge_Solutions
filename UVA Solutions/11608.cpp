/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int ase[15],lagbe[15],t=0;

    while(cin>>ase[0])
    {
        if(ase[0]<0)
            break;

        for(int i=1; i<=12; i++)
            cin>>ase[i];
        for(int j=0; j<12; j++)
            cin>>lagbe[j];

        cout<<"Case "<<++t<<":"<<endl;

        for(int i=0; i<12; i++)
        {
            if(ase[i]-lagbe[i]>=0)
            {
                 ase[i+1]=ase[i+1]+ase[i]-lagbe[i];
                 cout<<"No problem! :D"<<endl;
            }
            else
            {
                 ase[i+1]+=ase[i];
                 cout<<"No problem. :("<<endl;
            }
        }
    }

    return 0;
}

