/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main ()
{
    int n;
    int num[5];

    cin>>n;

    while(n--)
    {
        for(int i=0; i<5; i++)
        {
            cin>>num[i];
        }

        int maxi = num[0];

        for(int j=0; j<5; j++)
        {
            if(num[j] > maxi)
                maxi = num[j];
        }

        int mini = num[0];

        for(int k=0; k<5; k++)
        {
            if(num[k] < mini)
                mini = num[k];
        }

        cout<<maxi<<" "<<mini<<endl;
    }


    return 0;
}

