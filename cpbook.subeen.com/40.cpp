/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        long long int a;
        cin>>a;

        int flag=1;

        for(int i=2; i<=sqrt(a); i++)
        {
            if(a%i==0)
            flag=0;
            break;
        }
        if(flag==1)
            cout<<a<<" is a prime"<<endl;
        else
          cout<<a<<" is not a prime"<<endl;
    }
    return 0;
}

