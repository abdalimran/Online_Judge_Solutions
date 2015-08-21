/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n;

    while(cin>>n && n!=0)
    {
        int x=0,y=0;
        for(int i=1; i<=60; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(pow(i,3)-pow(j,3)==n)
                {
                    x=i;
                    y=j;
                    break;
                }
            }
            if(x!=0 && y!=0)
                break;
        }
        if(x!=0 && y!=0)
            cout<<x<<" "<<y<<endl;
        else
            cout<<"No solution"<<endl;
    }


    return 0;
}


