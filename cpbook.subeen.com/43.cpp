/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double orun,crun,rball,runrate,requiredrate;

    cin>>n;

    while(n--)
    {

        cin>>orun>>crun>>rball;
        double target=orun+1;

        runrate = crun/((300-rball)/6);

        requiredrate = (target-crun)/rball*6;

        cout<<fixed<<setprecision(2);

        cout<<runrate<<" "<<requiredrate<<endl;
    }

    return 0;
}

