/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int n,num,pos=0,neg=0;

    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cin>>num;

        if(num>0)
            pos++;
        else if(num<0)
            neg++;

    }

    cout<<pos<<" "<<neg<<endl;

    return 0;
}
