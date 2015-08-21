/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double num;

    cin>>n;

    while(n--)
    {
        cin>>num;

        if (sqrt(num)==floor(sqrt(num)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
