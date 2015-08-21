/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main ()
{
    int n;
    char ch1,ch2,ch3;

    cin>>n;

    while(n--)
    {
        cin>>ch1>>ch2>>ch3;

        cout<<static_cast<int>(ch1+ch2+ch3)<<endl;
    }


    return 0;
}
