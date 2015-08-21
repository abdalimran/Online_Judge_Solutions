/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,r1,c1,r2,c2;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>r1>>c1>>r2>>c2;

        int dif1=abs(r1-r2);
        int dif2=abs(c1-c2);

        if(dif1>=dif2)
            cout<<"Case "<<i<<": "<<dif1<<endl;
        else if(dif2>=dif1)
            cout<<"Case "<<i<<": "<<dif2<<endl;
    }

    return 0;
}
