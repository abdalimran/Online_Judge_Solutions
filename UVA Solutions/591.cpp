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

    for(int i=1; cin>>n && n!=0; i++)
    {
        int arr[n],sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        int avrg=sum/n;
        int min=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>avrg)
                min+=arr[i]-avrg;
        }

        cout<<"Set #"<<i<<endl;
        cout<<"The minimum number of moves is "<<min<<".\n"<<endl;
    }

    return 0;
}

