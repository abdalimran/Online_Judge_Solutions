//Bismillah hir rahmanir raheem. Thanks to Allah for everything.
//Coder: Abdullah Al Imran
//Email: abdalimran@gmail.com

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string s;
    while(cin>>s && s!="0")
    {
        int sum=0,c=1;
        for(int i=0; i<s.length(); i++)
            sum+=s[i]-'0';

        if(sum%9==0)
        {
            while(sum!=9 && sum>9)
            {
                int r=0;
                while(sum!=0)
                {
                    r+=sum%10;
                    sum=sum/10;
                }
                sum=r;
                c++;
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<c<<"."<<endl;
        }
        else
            cout<<s<<" is not a multiple of 9."<<endl;
    }


    return 0;
}

