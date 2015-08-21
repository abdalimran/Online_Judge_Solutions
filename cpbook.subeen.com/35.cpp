/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int n;
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
       cin>>x1>>y1>>x2>>y2;
       cin>>x3>>y3>>x4>>y4;
       if(max(x3, x1)>min(x2, x4) || max(y3,y1) > min(y2, y4))
            cout<<"Case "<<i<<": No"<<endl;
       else
            cout<<"Case "<<i<<": Yes"<<endl;
    }

    return 0;
}

