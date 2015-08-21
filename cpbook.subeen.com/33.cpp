/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,n1,n2,n3;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n1>>n2>>n3;
        cout<<"Case "<<i<<": ";

        int d=n2-n1;
        int r=n2/n1;
        int n=n3;
        int sum=n1+n2+n3;
        int a1=n1;


        if(sum == a1+(n-1)*d && sum != a1*pow(r,n)-1)
            cout<<"Arithmetic Progression"<<endl;
        else if(sum != a1+(n-1)*d && sum == a1*pow(r,n)-1)
            cout<<"Geometric Progression"<<endl;
        else if(sum == a1+(n-1)*d && sum == a1*pow(r,n)-1)
            cout<<"Both"<<endl;
        else if(sum != a1+(n-1)*d && sum != a1*pow(r,n)-1)
            cout<<"None"<<endl;

    }

    return 0;
}

