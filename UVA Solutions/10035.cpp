//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int long a,b;

    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;

        int carry=0,cadd=0;

        while(a||b)
        {
            cadd=(a%10+b%10+cadd)/10;
            a=a/10;
            b=b/10;
            carry=carry+cadd;
        }

        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<carry<<" carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;

    }

    return 0;
}

