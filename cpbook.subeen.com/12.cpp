/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{

    int n,t,count;

    cin>>t;

    while(t--)
    {
        cin>>n;
        count=1;

        while(n!=0)
        {
            if((n/=10) == 0)
                continue;
            else
                ++count;
        }

        cout<<count<<endl;
    }

  return 0;
}
