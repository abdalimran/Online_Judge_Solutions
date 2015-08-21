//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    long long int n,a,b,c,x,y;

    while(cin>>a>>b)
    {
        n=a/b;
        cout<<"["<<n<<";";
        c=a%b;

        while(c!=0)
        {
            x=b;
            y=c;
            n=x/y;
            cout<<n;
            c=x%y;
            if(c>0)
            cout<<",";
            b=y;
        }
        cout<<"]"<<endl;
    }

    return 0;
}

