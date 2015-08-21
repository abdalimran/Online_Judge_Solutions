/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,h1,m1,s1,h2,m2,s2,step;

    cin>>t;

    while(t--)
    {
        cin>>h1>>m1>>s1;
        cin>>h2>>m2>>s2;
        cin>>step;

        int s=(h1*60*60)+(m1*60)+s1;
        int e=(h2*60*60)+(m2*60)+s2;

        if(e>=s)
        {
            int diff = e-s;
            cout<<diff*step<<endl;
        }
        else if(s>=e)
        {
            int sum3=((e+24*3600)-s);
            cout<<sum3*step<<endl;
        }
    }

    return 0;
}

