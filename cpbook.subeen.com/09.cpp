/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    while(t--)
    {
        double sum=0;

        cin>>n;

        int num[n];

        for(int i=0; i<n; i++)
        {
            cin>>num[i];
            sum+=num[i];
        }

        cout.precision(2);
        cout <<fixed<<sum/n<<endl;
    }


    return 0;
}

