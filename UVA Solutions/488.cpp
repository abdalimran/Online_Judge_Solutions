#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int l,h,j,t;
    cin>>t;

    for(int a=0; a<t; a++)
    {
        cin>>h>>l;
        {
            for(int i=0; i<l; i++)
            {
                for(j=1; j<h; j++)
                {
                    for(int k=1; k<=j; k++)
                        cout<<j;
                    cout<<endl;
                }
                for(int k=h-1; j>=1; j--)
                {
                    for(k=1; k<=j; k++)
                        cout<<j;
                    cout<<endl;
                }
                if(i!=(l-1))
                    cout<<endl;
            }
            if(a!=(t-1))
                cout<<endl;
        }
    }

    return 0;
}

