/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int n;
    int num[5];
    double sum, avrg;

    cin>>n;

    while(n--)

    {
        sum=0;

        for(int i=0; i<5; i++)
        {
            cin>>num[i];
            sum+=num[i];
        }

        avrg = sum/5;

        cout<<avrg<<endl;
    }

    return 0;
}

